/*
  Author Name: Kartik Jagdale
  Date: 15/08/15 19:15
  Description: Iguard Demostration
*/

#include<stdio.h>
#include "includeA.h"
#include "includeB.h"

int main(int argc, char**argv){
    struct structA alphaA;
    struct structB betaB;
    printf("Hello, World!\n");
    alphaA.A = 20;
    betaB.B = 30;
    printf("Value of A in alphaA is %d\n",alphaA.A);
    printf("Value of B in betaB is %d\n",betaB.B);
    system("pause");return 0;}
