#!/usr/bin/python
import sympy as sy
import scipy as sp
import os

filename = __file__
fp = open(filename.replace(".py", ".tmpl.h"), "r")
tmpl = fp.read()
fp.close()

ND = 4

### define laplacian
laplacian = [[1, 2, 1], [2,  4,  2], [1, 2, 1],
             [2, 4, 2], [4,  8,  4], [2, 4, 2],
             [1, 2, 1], [2,  4,  2], [1, 2, 1],
             
             [2, 4, 2], [4,  8,  4], [2, 4, 2],
             [4, 8, 4], [8,-240, 8], [4, 8, 4],
             [2, 4, 2], [4,  8,  4], [2, 4, 2],
             
             [1, 2, 1], [2,  4,  2], [1, 2, 1],
             [2, 4, 2], [4,  8,  4], [2, 4, 2],
             [1, 2, 1], [2,  4,  2], [1, 2, 1]]
laplacian_denom = -64*2

### define dirax over x
dirac = [[ -1, 0,  1], [ -4, 0,  4], [ -1, 0,  1],
         [ -4, 0,  4], [-16, 0, 16], [ -4, 0,  4],
         [ -1, 0,  1], [ -4, 0,  4], [ -1, 0,  1],
         
         [ -4, 0,  4], [-16, 0, 16], [ -4, 0,  4],
         [-16, 0, 16], [-64, 0, 64], [-16, 0, 16],
         [ -4, 0,  4], [-16, 0, 16], [ -4, 0,  4],

         [ -1, 0,  1], [ -4, 0,  4], [ -1, 0,  1],
         [ -4, 0,  4], [-16, 0, 16], [ -4, 0,  4],
         [ -1, 0,  1], [ -4, 0,  4], [ -1, 0,  1]]
dirac_denom = -432

# ### define laplacian
# laplacian = [[0, 0, 0], [0,  0,  0], [0, 0, 0],
#              [0, 0, 0], [0,  1,  0], [0, 0, 0],
#              [0, 0, 0], [0,  0,  0], [0, 0, 0],
                                               
#              [0, 0, 0], [0,  1,  0], [0, 0, 0],
#              [0, 1, 0], [1, -8,  1], [0, 1, 0],
#              [0, 0, 0], [0,  1,  0], [0, 0, 0],
                                               
#              [0, 0, 0], [0,  0,  0], [0, 0, 0],
#              [0, 0, 0], [0,  1,  0], [0, 0, 0],
#              [0, 0, 0], [0,  0,  0], [0, 0, 0]]
# laplacian_denom = -2

# ### define dirax over x
# dirac =  [[0, 0, 0], [ 0,  0,  0], [0, 0, 0],
#           [0, 0, 0], [ 0,  0,  0], [0, 0, 0],
#           [0, 0, 0], [ 0,  0,  0], [0, 0, 0],
                                            
#           [0, 0, 0], [ 0,  0,  0], [0, 0, 0],
#           [0, 0, 0], [-1,  0,  1], [0, 0, 0],
#           [0, 0, 0], [ 0,  0,  0], [0, 0, 0],
                                            
#           [0, 0, 0], [ 0,  0,  0], [0, 0, 0],
#           [0, 0, 0], [ 0,  0,  0], [0, 0, 0],
#           [0, 0, 0], [ 0,  0,  0], [0, 0, 0]]
# dirac_denom = -2

laplacian = sp.array(laplacian).reshape([3, 3, 3, 3])
dirac = sp.array(dirac).reshape([3, 3, 3, 3])

### define dirac for y, z, t
dirac = [dirac]*4
dirac[2] = dirac[3].transpose((0, 1, 3, 2))
dirac[1] = dirac[3].transpose((0, 3, 2, 1))
dirac[0] = dirac[3].transpose((3, 1, 2, 0))
### gamma matrices
gamma = [0]*ND
for i in range(ND):
    gamma[i] = sy.Symbol("g%s" % ["t", "z", "y", "x"][i])

### utility functions
R = lambda x: tuple(map(lambda i: [1, 0, 2][i], x))
def coeffs(s):
    if s.coeff(sy.Symbol("I")) is None:
        I = 0
    else:
        I = float(s.coeff(sy.Symbol("I")))

    if filter(None, map(s.coeff, gamma)) == []:
        c = 0
    else:
        c = abs(float(filter(None, map(s.coeff, gamma))[0]))

    return tuple([I, c])

signs = lambda s: map(lambda x: sp.sign(x) if x is not None else 0,
                      map(s.coeff, [sy.Symbol("I")] + gamma))

    
v = []
for i in range(3):
    for j in range(3):
        for k in range(3):
            for l in range(3):
                v.append([i, j, k, l])

body = "/* BEGIN python generated segment */\n"
body += "\n  spinor_ax(out, %20.16f, in[v]);\n\n" %\
        (laplacian[1][1][1][1]/float(laplacian_denom))

for x in v:
    if sum(x) == 0:
        continue

    for i in x:
        if i != 0:
            break

    if i == 2:
        continue

    s = sy.Rational(laplacian[R(x)], laplacian_denom)*sy.Symbol("I")
    for i in range(ND):
        s += sy.Rational(dirac[i][R(x)], dirac_denom)*gamma[i]

    if coeffs(s)[0] == coeffs(s)[1] == 0:
        continue
    
    neigh = "v"
    for i in range(ND):
        neigh = neigh.replace("v", ("nneigh[%d][v]" % (i+(x[i]-1)*ND))
                              if x[i] != 0 else "v")
    
    gamma_func = "spinor_gamma"
    for i in [("t", signs(s)[1]),
              ("z", signs(s)[2]),
              ("y", signs(s)[3]),
              ("x", signs(s)[4])]:
        
        gamma_func += abs(i[1])*("_%c%c" % ({-1: "m", +1: "p", 0: " "}[i[1]], i[0]))

    body += "  /* " + str(s) + " */\n"
    body += "  nn = " + neigh + ";\n"
    body += "  idx = hypercube_neigh.index[%d][%d][%d][%d];\n" % tuple(x)
    body += "  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);\n"
    body += "  sp0 = (qpb_complex *)in[nn];\n"
    body += "  %s(sp1, sp0);\n" % gamma_func
    body += "  spinor_axpby(sp2, %20.16f, sp0, %20.16f, sp1);\n" % coeffs(s)
    body += "  spinor_sun_peq_mul(out, link, sp2);\n"
    body += "\n"
    
    # mirror site
    y = map(lambda x: x%2+1 if x!=0 else 0, x)
    s = sy.Rational(laplacian[R(y)], laplacian_denom)*sy.Symbol("I")
    for i in range(ND):
        s += sy.Rational(dirac[i][R(y)], dirac_denom)*gamma[i]

    neigh = "v"
    for i in range(ND):
        neigh = neigh.replace("v", ("nneigh[%d][v]" % (i+(y[i]-1)*ND))
                              if y[i] != 0 else "v")

    gamma_func = "spinor_gamma"
    for i in [("t", signs(s)[1]),
              ("z", signs(s)[2]),
              ("y", signs(s)[3]),
              ("x", signs(s)[4])]:
        
        gamma_func += abs(i[1])*("_%c%c" % ({-1: "m", +1: "p", 0: " "}[i[1]], i[0]))

    body += "  /* " + str(s) + " DAGGER */\n"
    body += "  nn = " + neigh + ";\n"
    body += "  idx = hypercube_neigh.index[%d][%d][%d][%d];\n" % tuple(x)
    body += "  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);\n"
    body += "  sp0 = (qpb_complex *)in[nn];\n"
    body += "  %s(sp1, sp0);\n" % gamma_func
    body += "  spinor_axpby(sp2, %20.16f, sp0, %20.16f, sp1);\n" % coeffs(s)
    body += "  spinor_sun_dag_peq_mul(out, link, sp2);\n"
    body += "\n"
body += "/* END python generated segment */\n"
print tmpl.replace("XXXBODYXXX", body)
