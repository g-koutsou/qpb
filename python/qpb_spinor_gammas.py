#!/usr/bin/python
import sympy as sy
I = sy.I

filename = __file__
fp = open(filename.replace(".py", ".tmpl.h"), "r")
tmpl = fp.read()
fp.close()

NS = 4

gamma_x = sy.Matrix([[ 0, 0, 0, I ],
                     [ 0, 0, I, 0 ],
                     [ 0,-I, 0, 0 ],
                     [-I, 0, 0, 0 ]])

gamma_y = sy.Matrix([[ 0, 0, 0, 1 ],
                     [ 0, 0,-1, 0 ],
                     [ 0,-1, 0, 0 ],
                     [ 1, 0, 0, 0 ]])

gamma_z = sy.Matrix([[ 0, 0, I, 0 ],
                     [ 0, 0, 0,-I ],
                     [-I, 0, 0, 0 ],
                     [ 0, I, 0, 0 ]])

gamma_t = sy.Matrix([[ 1, 0, 0, 0 ],
                     [ 0, 1, 0, 0 ],
                     [ 0, 0,-1, 0 ],
                     [ 0, 0, 0,-1 ]])

gammas = [gamma_t, gamma_z, gamma_y, gamma_x]

r = [-1, 0, +1]
x = [0]*4
gamma_combs = {}
for x[0] in r:
    for x[1] in r:
        for x[2] in r:
            for x[3] in r:
                if sum(map(abs, x)) == 0:
                    continue
                ga = sy.zeros(4)
                name = "gamma"
                tags = ["t", "z", "y", "x"]
                signs = {+1: "p", -1: "m", 0: ""}
                for i in range(len(gammas)):
                    ga += x[i]*gammas[i]
                    name = name + abs(x[i])*("_" + signs[x[i]] + tags[i])
                gamma_combs[name] = ga

body = "/* BEGIN python generated segment */\n"

for NC in [1, 3]:
    body += "#if NC == %d\n" % NC
    pr = sy.zeros(NS,NC)
    pi = sy.zeros(NS,NC)
    for i in range(NS):
        for j in range(NC):
            cs = j + i*NC
            pr[cs] = sy.Symbol('(p+%2d)->re' % cs, real=True)
            pi[cs] = sy.Symbol('(p+%2d)->im' % cs, real=True)
            p = sy.Matrix(NS, NC, lambda i, j: pr[j+i*NC] + pi[j+i*NC]*I)

    for name in gamma_combs:
        q = (gamma_combs[name] * p).expand()
        body += "__inline__ void\n"
        body += "spinor_%s(qpb_complex *q, qpb_complex *p)\n{\n" % name
        for i in range(NC*NS):
            for reim in [0, 1]:
                s = str(q[i].as_real_imag()[reim])
                if s[0] != "-": s = " " + s 
                body += "  (q+%2d)->%s = %s;\n" % (i, ["re", "im"][reim], s)
        body += "\n  return;\n}\n\n"

    for name in gamma_combs:
        q = (gamma_combs[name] * p).expand()
        body += "__inline__ void\n"
        body += "spinor_%s(qpb_complex *q, qpb_complex *p)\n{\n" %\
                 name.replace("gamma", "gamma_peq")
        for i in range(NC*NS):
            for reim in [0, 1]:
                s = str(q[i].as_real_imag()[reim])
                if s[0] != "-": s = " " + s 
                body += "  (q+%2d)->%s += %s;\n" % (i, ["re", "im"][reim], s)
        body += "\n  return;\n}\n\n"
    body += "#endif /* NC == %d */\n" % NC
body += "/* END python generated segment */\n"

print(tmpl.replace("XXXBODYXXX", body))
