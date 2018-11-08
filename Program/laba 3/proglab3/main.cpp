#include <stdio.h>
#include <math.h>




int main()
{
    float x,y,dx,xp,xk;
    xp=0;
    xk=10;
    dx=(xk-xp)/40;
    x=xp;
    while (x<=xk)
        {
            y=(3*sin(sqrt(x)))+(0.35*x)-3.8;
            printf("x=%f y=%f\n",x,y);
            x=x+dx;
        }

return 0;
}
