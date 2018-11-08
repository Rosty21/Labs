#include <stdio.h>


int main()
{
float tph[]={14,14,14,13,13,13,13,13,13,15,17,18,19,20,21,19,18,17,16,16,15,15,15,14};
int n =24;
float avg, sum, v;
int i;
for (i=0; i<n; ++i)
    {
        sum += tph[i];
    }
avg = sum / n;
v = avg;
printf("Average temperature in Lvi");
printf("v=%f",v);
printf(" oC\nBy 30.10.2018");
return 0;
}
