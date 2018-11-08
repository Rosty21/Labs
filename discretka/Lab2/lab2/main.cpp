#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    const int n =6;
    double array[]={3,1,2,5,6,4,3};
    sort(array, array+6);
    int i;
    for (i = n; i>=1; i--){
    if (array[i] < array [i+1] && array [i+1] > array[i+2,i+3,i+4,i+5])
            {
             sort(array[i+1],array[i+5]);
             int t;int *a; int *b;
             for (t=i+5;t>=i+1;t--){
                if (t>array[i])
                {

                 *a = t; *b = array[i];
                 int temp = *a;
                 *a=*b;
                 *b=temp;
                }
                else {
                 *a = t; *b = array[i-2];
                 int temp = *a;
                 *a=*b;
                 *b=temp;}
             }
            }
    }








 //  sort(array, array+6);
   //int i=0;
    //for (i=0; i<n; i++)
      cout<<array[i]<<endl;

    return 0;
}
