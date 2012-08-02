#!/usr/bin/python
import sympy as sy
import itertools
I = sy.I

filename = __file__
fp = open(filename.replace(".py", ".tmpl.h"), "r")
tmpl = fp.read()
fp.close()

NS = 4

one = sy.eye(NS)

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

gamma_5 = gamma_x*gamma_y*gamma_z*gamma_t
gammas = [dict(name = "gamma_x", doc = "\gamma_x", mat = gamma_x),
          dict(name = "gamma_y", doc = "\gamma_y", mat = gamma_y),
          dict(name = "gamma_z", doc = "\gamma_z", mat = gamma_z),
          dict(name = "gamma_t", doc = "\gamma_t", mat = gamma_t),
          dict(name = "gamma_5", doc = "\gamma_5", mat = gamma_5),
          dict(name = "C", doc = "C", mat = gamma_t*gamma_y),
          dict(name = "Cg5", doc = "C\gamma_5", mat = gamma_t*gamma_y*gamma_5),
          dict(name = "Cgx", doc = "C\gamma_x", mat = gamma_t*gamma_y*gamma_x),
          dict(name = "Cgy", doc = "C\gamma_y", mat = gamma_t*gamma_y*gamma_y),
          dict(name = "Cgz", doc = "C\gamma_z", mat = gamma_t*gamma_y*gamma_z),
          dict(name = "Cgt", doc = "C\gamma_t", mat = gamma_t*gamma_y*gamma_t),]

projectors = [
    dict(name = "ProjTp", doc = "\Gamma^+ = (1+\gamma_t)/4", mat = (one + gamma_t)/4.),
    dict(name = "ProjTm", doc = "\Gamma^- = (1-\gamma_t)/4", mat = (one - gamma_t)/4.),
    dict(name = "ProjXp", doc = "i\Gamma^+\gamma_5\gamma_x", mat = I*(one + gamma_t)/4.*gamma_5*gamma_x),
    dict(name = "ProjXm", doc = "i\Gamma^-\gamma_5\gamma_x", mat = I*(one - gamma_t)/4.*gamma_5*gamma_x),
    dict(name = "ProjYp", doc = "i\Gamma^+\gamma_5\gamma_y", mat = I*(one + gamma_t)/4.*gamma_5*gamma_y),
    dict(name = "ProjYm", doc = "i\Gamma^-\gamma_5\gamma_y", mat = I*(one - gamma_t)/4.*gamma_5*gamma_y),
    dict(name = "ProjZp", doc = "i\Gamma^+\gamma_5\gamma_z", mat = I*(one + gamma_t)/4.*gamma_5*gamma_z),
    dict(name = "ProjZm", doc = "i\Gamma^-\gamma_5\gamma_z", mat = I*(one - gamma_t)/4.*gamma_5*gamma_z),
    ]
body = "/* BEGIN python generated segment */\n"

for NC in [1, 3]:
    body += "#if NC == %d\n" % NC
    pr = sy.zeros((NS,NS))
    pi = sy.zeros((NS,NS))
    p = []
    for c0 in range(NC):
        for c1 in range(NC):
            for s0 in range(NS):
                for s1 in range(NS):
                    pr[s1+s0*NS] = sy.Symbol('in[%2d][%2d].re' % (c0+s0*NC, c1+s1*NC), real=True)
                    pi[s1+s0*NS] = sy.Symbol('in[%2d][%2d].im' % (c0+s0*NC, c1+s1*NC), real=True)
            p.append(sy.Matrix(NS, NS, lambda i, j: pr[j+i*NS] + pi[j+i*NS]*I))

    for elem in gammas:
        name = elem["name"]
        doc = elem["doc"]
        mat = elem["mat"]
        body += "/* multiply prop by %s from the left */\n" % doc
        body += "__inline__ void\n"
        body += "prop_%s_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])\n{\n" % name
        for c0 in range(NC):
            for c1 in range(NC):
                q = (mat * p[c1+c0*NC]).expand()
                for sp0 in range(NS):
                    for sp1 in range(NS):
                        for reim in [0, 1]:
                            s = str(q[sp1+NS*sp0].as_real_imag()[reim])
                            if s[0] != "-": s = " " + s 
                            body += "  out[%2d][%2d].%s = %s;\n" % (c0+sp0*NC, c1+sp1*NC, ["re", "im"][reim], s)
                body += "\n"
        body += "\n  return;\n}\n\n"

    for elem in gammas:
        name = elem["name"]
        doc = elem["doc"]
        mat = gamma_t * elem["mat"].H * gamma_t
        body += "/* multiply prop by \bar{%s} from the right */\n" % doc
        body += "__inline__ void\n"
        body += "prop_G_%s(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])\n{\n" % name
        for c0 in range(NC):
            for c1 in range(NC):
                q = (p[c1+c0*NC] * mat).expand()
                for sp0 in range(NS):
                    for sp1 in range(NS):
                        for reim in [0, 1]:
                            s = str(q[sp1+NS*sp0].as_real_imag()[reim])
                            if s[0] != "-": s = " " + s 
                            body += "  out[%2d][%2d].%s = %s;\n" % (c0+sp0*NC, c1+sp1*NC, ["re", "im"][reim], s)
                body += "\n"
        body += "\n  return;\n}\n\n"

    for elem in projectors:
        name = elem["name"]
        doc = elem["doc"]
        mat = elem["mat"]
        body += "/* multiply prop by %s from the left */\n" % doc
        body += "__inline__ void\n"
        body += "prop_%s_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])\n{\n" % name
        for c0 in range(NC):
            for c1 in range(NC):
                q = (mat * p[c1+c0*NC]).expand()
                for sp0 in range(NS):
                    for sp1 in range(NS):
                        for reim in [0, 1]:
                            s = str(q[sp1+NS*sp0].as_real_imag()[reim])
                            if s[0] != "-": s = " " + s 
                            body += "  out[%2d][%2d].%s = %s;\n" % (c0+sp0*NC, c1+sp1*NC, ["re", "im"][reim], s)
                body += "\n"
        body += "\n  return;\n}\n\n"

    for elem in projectors:
        name = elem["name"]
        doc = elem["doc"]
        mat = elem["mat"]
        body += "/* multiply prop by %s from the right */\n" % doc
        body += "__inline__ void\n"
        body += "prop_G_%s(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])\n{\n" % name
        for c0 in range(NC):
            for c1 in range(NC):
                q = (p[c1+c0*NC] * mat).expand()
                for sp0 in range(NS):
                    for sp1 in range(NS):
                        for reim in [0, 1]:
                            s = str(q[sp1+NS*sp0].as_real_imag()[reim])
                            if s[0] != "-": s = " " + s 
                            body += "  out[%2d][%2d].%s = %s;\n" % (c0+sp0*NC, c1+sp1*NC, ["re", "im"][reim], s)
                body += "\n"
        body += "\n  return;\n}\n\n"

    pr = sy.zeros((NS*NC,NS*NC))
    pi = sy.zeros((NS*NC,NS*NC))

    qr = sy.zeros((NS*NC,NS*NC))
    qi = sy.zeros((NS*NC,NS*NC))
    
    x = sy.zeros((NS*NC,NS*NC))
    for c0 in range(NC):
        for c1 in range(NC):
            for s0 in range(NS):
                for s1 in range(NS):
                    pr[c0+s0*NC, c1+s1*NC] = sy.Symbol('A[%2d][%2d].re' % (c0+s0*NC, c1+s1*NC), real=True)
                    pi[c0+s0*NC, c1+s1*NC] = sy.Symbol('A[%2d][%2d].im' % (c0+s0*NC, c1+s1*NC), real=True)

                    qr[c0+s0*NC, c1+s1*NC] = sy.Symbol('B[%2d][%2d].re' % (c0+s0*NC, c1+s1*NC), real=True)
                    qi[c0+s0*NC, c1+s1*NC] = sy.Symbol('B[%2d][%2d].im' % (c0+s0*NC, c1+s1*NC), real=True)

    p = sy.Matrix(NS*NC, NS*NC, lambda i, j: pr[j+i*NS*NC] + pi[j+i*NS*NC]*I)
    q = sy.Matrix(NS*NC, NS*NC, lambda i, j: qr[j+i*NS*NC] + qi[j+i*NS*NC]*I)
    
    body += "__inline__ void\n"
    body += "prop_G_G(qpb_complex C[NC*NS][NC*NS], qpb_complex A[NC*NS][NC*NS], qpb_complex B[NC*NS][NC*NS])\n{\n" 
    for csp0 in range(NC*NS):
        for csp1 in range(NC*NS):
            for col in range(NC):
                for sp in range(NS):
                    x[csp0, csp1] += p[csp0, col+sp*NC] * q[col+sp*NC, csp1]

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
print tmpl.replace("XXXBODYXXX", body)
