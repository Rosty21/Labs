#include <stdio.h>
#include <math.h>



double x,y,z,t,a,b,c1,c2,d,e,PI;
int main ()
{
    PI = 3.141592;
    x = 14.26;
    y = -1.22;
    z = 0.035;

    a = 2*cos(x-(PI/6));
    c1=sin(y)*sin(y);
    b = 0.5+c1;
    c2 = z*z;
    d = 3-(c2/5);
    e = 1+(c2/d);
    t = a/b*e;
    printf("t=%lf",t);
    return 0;

}
