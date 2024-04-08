#!/usr/bin/python
import sympy as sy
import itertools

I = sy.I

filename = __file__
fp = open(filename.replace(".py", ".tmpl.h"), "r")
tmpl = fp.read()
fp.close()

NS = 4
### These contractions only make sense for NC > 2
NC = 3 

eps = [dict(idx = (0,1,2), sign = +1),
       dict(idx = (2,0,1), sign = +1),
       dict(idx = (1,2,0), sign = +1),
       dict(idx = (2,1,0), sign = -1),
       dict(idx = (0,2,1), sign = -1),
       dict(idx = (1,0,2), sign = -1)]

body = "/* BEGIN python generated segment */\n"
body += "#if NC == %d\n" % NC

pr = sy.zeros(NS*NC,NS*NC)
pi = sy.zeros(NS*NC,NS*NC)
qr = sy.zeros(NS*NC,NS*NC)
qi = sy.zeros(NS*NC,NS*NC)
for c0 in range(NC):
    for c1 in range(NC):
        for s0 in range(NS):
            for s1 in range(NS):
                csp0 = c0+s0*NC
                csp1 = c1+s1*NC
                pr[csp0, csp1] = sy.Symbol('A[%2d][%2d].re' % (csp0, csp1), real=True)
                pi[csp0, csp1] = sy.Symbol('A[%2d][%2d].im' % (csp0, csp1), real=True)

                qr[csp0, csp1] = sy.Symbol('B[%2d][%2d].re' % (csp0, csp1), real=True)
                qi[csp0, csp1] = sy.Symbol('B[%2d][%2d].im' % (csp0, csp1), real=True)

p = sy.Matrix(NS*NC, NS*NC, lambda i, j: pr[i, j] + pi[i, j]*I)
q = sy.Matrix(NS*NC, NS*NC, lambda i, j: qr[i, j] + qi[i, j]*I)
for x0 in range(NS):
    for x1 in range(x0+1, NS):
        x = sy.Matrix(NS*NC, NS*NC, lambda i, j: 0+0*I)
        body += "__inline__ void\n"
        body += ("prop_contract_%d%d(qpb_complex C[NC*NS][NC*NS], qpb_complex A[NC*NS][NC*NS], qpb_complex B[NC*NS][NC*NS])\n{\n" 
                 % (x0, x1))
        for col0 in eps:
            a0, b0, c0 = col0["idx"]
            sign0 = col0["sign"] 
            for col1 in eps:
                a1, b1, c1 = col1["idx"]
                sign1 = col1["sign"] 
                for mu in range(NS):
                    for nu in range(NS):
                        for ku in range(NS):
                            idx = [-1]*4
                            idx[x0] = ku
                            idx[x1] = ku
                            idx[idx.index(-1)] = mu
                            idx[idx.index(-1)] = nu
                            csp0 = a1+mu*NC
                            csp1 = a0+nu*NC
                            x[csp0, csp1] += p[b0+idx[0]*NC, b1+idx[1]*NC] * q[c0+idx[2]*NC, c1+idx[3]*NC] * sign0 * sign1

        lines = [x[i, j].expand().as_real_imag() for i, j in itertools.product(range(NS*NC), range(NS*NC))]
        lines = [(str(x[0]), str(x[1])) for x in lines]
        lines = [(" "+x[0] if x[0][0] != "-" else x[0],
                  " "+x[1] if x[1][0] != "-" else x[1]) for x in lines]
        lines = [(str(x[0]).replace(" + ", " \n\t+").replace(" - ", " \n\t-"),
                  str(x[1]).replace(" + ", " \n\t+").replace(" - ", " \n\t-")) for x in lines]
        
        lines = [("\n  C[%2d][%2d].re = \n\t%s;\n" % (i, j, lines[j+i*NS*NC][0]),
                  "\n  C[%2d][%2d].im = \n\t%s;\n" % (i, j, lines[j+i*NS*NC][1])) 
                 for i,j in itertools.product(range(NS*NC), range(NS*NC))]

        body += "".join([x[0] + x[1] for x in lines])
        body += "\n  return;\n}\n\n"

body += "#endif /* NC == %d */\n" % NC
body += "/* END python generated segment */\n"

print(tmpl.replace("XXXBODYXXX", body))
