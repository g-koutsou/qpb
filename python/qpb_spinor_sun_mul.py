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
    pr = sy.zeros(NS, NC)
    pi = sy.zeros(NS, NC)
    ur = sy.zeros(NC, NC)
    ui = sy.zeros(NC, NC)
    for i in range(NS):
        for j in range(NC):
            cs = j + i*NC
            pr[cs] = sy.Symbol('(p+%2d)->re' % cs, real=True)
            pi[cs] = sy.Symbol('(p+%2d)->im' % cs, real=True)
    p = sy.Matrix(NS, NC, lambda i, j: pr[j+i*NC] + pi[j+i*NC]*I)

    for i in range(NC):
        for j in range(NC):
            k = j + i*NC
            ur[k] = sy.Symbol('(u+%2d)->re' % k, real=True)
            ui[k] = sy.Symbol('(u+%2d)->im' % k, real=True)
    u = sy.Matrix(NC, NC, lambda i, j: ur[j+i*NC] + ui[j+i*NC]*I)

    ### U * psi
    body += "__inline__ void\n"
    body += "spinor_sun_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)\n{\n"
    q = sy.Matrix(NS, NC, lambda i, j: u[j, :].dot(p[i, :])).expand()
    for i in range(NS):
        for j in range(NC):
            cs = j + i*NC            
            reim = q[i, j].as_real_imag()

            body += "  (q+%2d)->re = \n" % cs
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (q+%2d)->im = \n" % cs
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### += U * psi
    body += "__inline__ void\n"
    body += "spinor_sun_peq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)\n{\n"
    q = sy.Matrix(NS, NC, lambda i, j: u[j, :].dot(p[i, :])).expand()
    for i in range(NS):
        for j in range(NC):
            cs = j + i*NC            
            reim = q[i, j].as_real_imag()

            body += "  (q+%2d)->re += \n" % cs
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (q+%2d)->im += \n" % cs
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### -= U * psi
    body += "__inline__ void\n"
    body += "spinor_sun_meq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)\n{\n"
    q = sy.Matrix(NS, NC, lambda i, j: u[j, :].dot(p[i, :])).expand()
    for i in range(NS):
        for j in range(NC):
            cs = j + i*NC            
            reim = q[i, j].as_real_imag()

            body += "  (q+%2d)->re -= \n" % cs
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (q+%2d)->im -= \n" % cs
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### U^+ * psi
    body += "__inline__ void\n"
    body += "spinor_sun_dag_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)\n{\n"
    q = sy.Matrix(NS, NC, lambda i, j: u.conjugate().transpose()[j, :].dot(p[i, :])).expand()
    for i in range(NS):
        for j in range(NC):
            cs = j + i*NC            
            reim = q[i, j].as_real_imag()

            body += "  (q+%2d)->re = \n" % cs
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (q+%2d)->im = \n" % cs
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### += U^+ * psi
    body += "__inline__ void\n"
    body += "spinor_sun_dag_peq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)\n{\n"
    q = sy.Matrix(NS, NC, lambda i, j: u.conjugate().transpose()[j, :].dot(p[i, :])).expand()
    for i in range(NS):
        for j in range(NC):
            cs = j + i*NC            
            reim = q[i, j].as_real_imag()

            body += "  (q+%2d)->re += \n" % cs
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (q+%2d)->im += \n" % cs
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"

    ### -= U^+ * psi
    body += "__inline__ void\n"
    body += "spinor_sun_dag_meq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)\n{\n"
    q = sy.Matrix(NS, NC, lambda i, j: u.conjugate().transpose()[j, :].dot(p[i, :])).expand()
    for i in range(NS):
        for j in range(NC):
            cs = j + i*NC            
            reim = q[i, j].as_real_imag()

            body += "  (q+%2d)->re -= \n" % cs
            for line in wrap(str(reim[0])+";", NWRAP):
                body += "\t%s\n" % line

            body += "  (q+%2d)->im -= \n" % cs
            for line in wrap(str(reim[1])+";", NWRAP):
                body += "\t%s\n" % line

        body += "\n"
    body += "  return;\n}\n\n"
    body += "#endif /* NC == %d */\n" % NC
body += "/* END python generated segment */\n"

print(tmpl.replace("XXXBODYXXX", body))

