/*
  Name: Void Pointer
  Author:Kartik Jagdale 
  Date: 17/08/15 21:26
  Description: Demo of Void Pointer in C
  
  So, basicaly is takes char pointer C passes it to function fp, where 
  fp return void pointer to the C and then it is converted to int 
  and dispalyed in Hex
  
*/
#include<stdio.h>
void * fp(void *);
int main(int argc, char**argv){
    char *c = "Kartik";
    int *vp = fp(c);
    printf("%08x\n",*vp);
    system("pause");return 0;}
void * fp(void *vp){
     return vp;
     }
