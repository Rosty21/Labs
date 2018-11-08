#include <stdio.h>
#include "LogCon.h"



int NOT (int a)
{
   a = !a;
   return a;
}


int AND (int a,int b)
{
    if (a&&b)
        return  1;
            else
               return 0;
}



int OR (int a, int b)
{
    if (a||b)
        return 1;
            else
                return 0;
}



int IMP (int a, int b)
{
    if (!a||b)
        return 1;
            else
                return 0;
}



int EQU (int a, int b)
{
    if (a==b)
        return 1;
            else
                return 0;
}



int XOR (int a, int b)
{
    if (a!=b)
        return 1;
            else
                return 0;
}
