#!/usr/bin/python
import sympy as sy
import textwrap
I = sy.I
wrap = textwrap.wrap
NWRAP = 72
NS = 4

filename = __file__
fp = open(filename.replace(".py", ".tmpl.h"), "r")
tmpl = fp.read()
fp.close()

body = "/* BEGIN python generated segment */\n"

for NC in [1, 3]:
    body += "#if NC == %d\n" % NC
    xr = sy.zeros((NC, NC))
    xi = sy.zeros((NC, NC))

    yr = sy.zeros((NC, NC))
    yi = sy.zeros((NC, NC))

    ar = sy.Symbol('a.re', real=True)
    ai = sy.Symbol('a.im', real=True)
    for i in range(NC):
        for j in range(NC):
            k = j + i*NC
            xr[k] = sy.Symbol('(x+%2d)->re' % k, real=True)
            xi[k] = sy.Symbol('(x+%2d)->im' % k, real=True)

            yr[k] = sy.Symbol('(y+%2d)->re' % k, real=True)
            yi[k] = sy.Symbol('(y+%2d)->im' % k, real=True)
    x = sy.Matrix(NC, NC, lambda i, j: xr[j+i*NC] + xi[j+i*NC]*I)
    y = sy.Matrix(NC, NC, lambda i, j: yr[j+i*NC] + yi[j+i*NC]*I)
    a = ar + ai*I
    
    ### U * U
    body += "__inline__ void\n"
    body += "sun_mul_uu(qpb_complex *z, qpb_complex *x, qpb_complex *y)\n{\n"
    z = (x*y).expand()
    for i in range(NC):
        for j in range(NC):
            k = j + i*NC            
            reim = z[i, j].as_real_imag()

            body += "  (z+%2d)->re = \n" % k
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (z+%2d)->im = \n" % k
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### U * U^+
    body += "__inline__ void\n"
    body += "sun_mul_ud(qpb_complex *z, qpb_complex *x, qpb_complex *y)\n{\n"
    z = (x*(y.transpose().conjugate())).expand()
    for i in range(NC):
        for j in range(NC):
            k = j + i*NC            
            reim = z[i, j].as_real_imag()

            body += "  (z+%2d)->re = \n" % k
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (z+%2d)->im = \n" % k
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### U^+ * U
    body += "__inline__ void\n"
    body += "sun_mul_du(qpb_complex *z, qpb_complex *x, qpb_complex *y)\n{\n"
    z = ((x.transpose().conjugate())*y).expand()
    for i in range(NC):
        for j in range(NC):
            k = j + i*NC            
            reim = z[i, j].as_real_imag()

            body += "  (z+%2d)->re = \n" % k
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (z+%2d)->im = \n" % k
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### U^+ * U^+
    body += "__inline__ void\n"
    body += "sun_mul_dd(qpb_complex *z, qpb_complex *x, qpb_complex *y)\n{\n"
    z = ((x.transpose().conjugate())*(y.transpose().conjugate())).expand()
    for i in range(NC):
        for j in range(NC):
            k = j + i*NC            
            reim = z[i, j].as_real_imag()

            body += "  (z+%2d)->re = \n" % k
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (z+%2d)->im = \n" % k
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### a * U
    body += "__inline__ void\n"
    body += "sun_mul_au(qpb_complex *z, qpb_complex a, qpb_complex *x)\n{\n"
    z = (a*x).expand()
    for i in range(NC):
        for j in range(NC):
            k = j + i*NC            
            reim = z[i, j].as_real_imag()

            body += "  (z+%2d)->re = \n" % k
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (z+%2d)->im = \n" % k
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"
    body += "#endif /* NC == %d */\n" % NC
body += "/* END python generated segment */\n"

print tmpl.replace("XXXBODYXXX", body)
