/*Author: Kartik Jagdale */
#include<stdio.h>

int main(int argc, char **argv){
    int a = 0;
    int b = 0;
    
    if(a){
          puts("A is true\n");
          }
          else if(b){
               puts("B is True\n");
               }
          else{
               puts("Nothing is True\n");
               }
    printf("Using Ternary Conditional Operator\n");
    int c = a ? 7 : 9; /* Note the Ternary condition*/ 
    printf("C is %d\n",c);
               
system("pause");
return 0;
}
