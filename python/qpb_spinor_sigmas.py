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

r = [3, 2, 1, 0]
sigmas = {}
for i in range(len(r)):
    for j in range(i+1, len(r)):
        name = "sigma"
        tags = ["x", "y", "z", "t"]
        name = name + "_" + tags[i] + tags[j]
        sigmas[name] = I/2 * (gammas[r[i]]*gammas[r[j]] - gammas[r[j]]*gammas[r[i]])

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

    for name in sigmas:
        q = (sigmas[name] * p).expand()
        body += "__inline__ void\n"
        body += "spinor_%s(qpb_complex *q, qpb_complex *p)\n{\n" % name
        for i in range(NC*NS):
            for reim in [0, 1]:
                s = str(q[i].as_real_imag()[reim])
                if s[0] != "-": s = " " + s 
                body += "  (q+%2d)->%s = %s;\n" % (i, ["re", "im"][reim], s)
        body += "\n  return;\n}\n\n"

    for name in sigmas:
        q = (sigmas[name] * p).expand()
        body += "__inline__ void\n"
        body += "spinor_%s(qpb_complex *q, qpb_complex *p)\n{\n" %\
                 name.replace("sigma", "sigma_peq")
        for i in range(NC*NS):
            for reim in [0, 1]:
                s = str(q[i].as_real_imag()[reim])
                if s[0] != "-": s = " " + s 
                body += "  (q+%2d)->%s += %s;\n" % (i, ["re", "im"][reim], s)
        body += "\n  return;\n}\n\n"
    body += "#endif /* NC == %d */\n" % NC
body += "/* END python generated segment */\n"

print(tmpl.replace("XXXBODYXXX", body))
