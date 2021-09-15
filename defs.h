#include <stdio.h>

#define NL putchar('\n')
#define PR(formato,valor) printf(#valor " = %" #formato "\t", (valor))

#define PRINT1(f, x1) PR(f, x1), NL
#define PRINT2(f, x1,x2) PR(f, x1), PRINT1(f, x2)
#define PRINT3(f, x1,x2,x3) PR(f, x1), PRINT2(f, x2,x3)
#define PRINT4(f, x1,x2,x3,x4) PR(f, x1), PRINT3(f, x2,x3,x4)
#define PRINT5(f, x1,x2,x3,x4,x5) PR(f, x1), PRINT4(f, x2,x3,x4,x5)
