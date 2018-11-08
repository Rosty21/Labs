#include <stdio.h>
#include "LogCon.h"

int DO(int a,int b){
        if (NOT(a)==1){
    printf("%c",'T');
    printf("  |  ");}
        else {printf("%c",'F');
              printf("  |  ");}

if (AND(a,b)==1){
    printf("%c",'T');
    printf("   |  ");}
        else {printf("%c",'F');
              printf("   |  ");}

if (OR(a,b)==1){
    printf("%c",'T');
    printf("   |  ");}
        else {printf("%c",'F');
              printf("   |  ");}

if (IMP(a,b)==1){
    printf("%c",'T');
    printf("   |  ");}
        else {printf("%c",'F');
              printf("   |  ");}

if (EQU(a,b)==1){
    printf("%c",'T');
    printf("  |  ");}
        else {printf("%c",'F');
              printf("  |  ");}

if (XOR(a,b)==1){
    printf("%c",'T');
    printf("   |  \n");}
        else {printf("%c",'F');
              printf("   |  \n");}
}

int main()
{
int a = 1;
int b = 1;
printf(" ______________________________________________\n");
printf("| a | b | !a | a&&b | a||b | a->b | a~b | a!=b |\n");
printf("| T | T | ");
DO(a,b);

printf("| T | F | ");
 a = 1;
 b = 0;
DO(a,b);

printf("| F | T | ");
 a = 0;
 b = 1;
DO(a,b);

printf("| F | F | ");
 a = 0;
 b = 0;
DO(a,b);
}
