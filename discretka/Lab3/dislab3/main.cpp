#include <iostream>
#include "liblab3.h"

using namespace std;

int main()
{
    int i,j,k,sz; // sz - розмір масиву


    do {
    int var = Menu();
    switch (var){
        case 1:{
            int a1[]={3,4,5,8,1,9};
            sz = sizeof(a1)/sizeof(a1[0]);
            int x[sz]; // задання буферного масиву також розміру
            cout << "\nBefore --->";
            Output(sz, a1); // виведення початкового вигляду масиву
            Bubblesort(a1, x ,sz);
            cout << "\nAfter --->";
            Output(sz, a1); // виведення масиву після сортування
            break;}
        case 2:{
            int a2[]={4,6,1,9,35,2,98};
            sz = sizeof(a2)/sizeof(a2[0]);
            int x[sz];
            cout << "\nBefore --->";
            Output(sz, a2);
            Selectsort(a2, x, sz);
            cout << "\nAfter --->";
            Output(sz, a2);
            break;}
        case 3:{
            int  a3[]={7,2,1,9,5};
            sz = sizeof(a3)/sizeof(a3[0]);
            int x[sz];
            cout << "\nBefore --->";
            Output(sz, a3);
            Insertsort(a3, x, sz);
            cout << "\nAfter --->";
            Output(sz, a3);
            break;}
        case 4:
            return 0;}}
    while (1);
}

