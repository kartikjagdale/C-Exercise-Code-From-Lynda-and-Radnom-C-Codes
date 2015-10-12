/*
Name : Increment Decrement operator Demo
Author: Kartik Jagdale
*/

#include<stdio.h>

int main(int argc, char**argv){
    int i, j;
    /*Increment*/
    printf("\n Increment Starting ");
    i = 0;
    printf("%d %d %d",++i,i++,i);/*Predict the output*/
    i = 0;
    i +=1; /*Another method of increment but not good always*/
    i = i+1;/*Good Method*/
    printf("\n%d",i);
    i =0;
    printf("\n%d %d %d",i,i++,++i);
    i =0;
    printf("\n%d %d %d",i,++i,i++);

    /*Decrement*/
    printf("\n Decremnt Starting ");
    j = 3;
    printf("\n%d %d %d",j, j--, --j);
    return 0;}
