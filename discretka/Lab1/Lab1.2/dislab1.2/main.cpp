#include <stdio.h>
#include "LogCon.h"

int DO (int r,int p,int q){

        IMP(p,q);
        NOT(q);
        OR(p,NOT(q));
        EQU(IMP(p,q),OR(p,NOT(q)));
        OR(r,p);
        EQU(OR(r,p),EQU(IMP(p,q),OR(p,NOT(q))));
        printf("%i \t %i \t %i \t\t\t %i\n\n",r,p,q,EQU(OR(r,p),EQU(IMP(p,q),OR(p,NOT(q)))));
}

int main()
{
printf("r        p       q   [r OR p] EQU [(p IMP q) EQU (p OR (NOT q))]\n");

int r = 1; int p = 1; int q = 1;

DO (r,p,q);

r = 0; p = 0; q = 0;
DO (r,p,q);

r = 1; p = 1; q = 0;
DO (r,p,q);

r = 0; p = 1; q = 1;
DO (r,p,q);

r = 1; p = 0; q = 1;
DO (r,p,q);

r = 1; p = 0; q = 0;
DO (r,p,q);

r = 0; p = 1; q = 0;
DO (r,p,q);

r = 0; p = 0; q = 1;
DO (r,p,q);
return 0;
}
