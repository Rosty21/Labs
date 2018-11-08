#include <stdio.h>
#include <math.h>


int main ()
{
    double x,y,z,a,b;
    x=2;
    y=0;
    z = x*y;
    b = x*x ;
    if (z>0){
        a = pow((b+y),2) - pow((b*y),0.5);
        printf("%lf", a);
            } else if (z<0){
        a = pow((b+y),2) + pow((fabs(b*y)),0.5);
        printf("%lf", a);
            } else {
        a = pow((b+y),2) + 1;
        printf("%lf", a);}
return 0;
}






