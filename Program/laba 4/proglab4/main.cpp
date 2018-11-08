#include <stdio.h>
#include <math.h>

float f1(float x)
{
    float c;
    c = (3*sin(sqrt(x)))+(0.35*x)-3.8;
    return c;
}
float f2(float x)
{
    float S;
    S = (3*sin(sqrt(x)))+(0.35*x)-3.8;
    return S;
}
int main()
{
    float y,c,d,S,eps;
    c = 2.25;
    d = 2.5;
    eps = 0.0001;
    while (d-c > eps)
    {
        S = (c+d)/2;
        if (f1(c)*f2(S)<0)
        {
            d = S;
        }
        else
        {
        c = S;
        }
        }
    y = S;
    printf("y=%f",y);
    return 0;
}
