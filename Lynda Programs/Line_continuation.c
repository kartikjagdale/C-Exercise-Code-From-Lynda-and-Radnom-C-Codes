/*Author: Kartik Jagdale 
Demostration of Line Continuation
*/
#include<stdio.h>
/* See the Line Continuation(/) backslah used in MACRO below */
#define swap(a, b) do{ \
                       a ^=b; \
                       b ^=a; \
                       a ^=b; \
                       }while(0);


int main(int argc, char**argv){
    int a =10;
    int b =20;
    printf("This is called as\
 Line Continuation\
 using backkkkkkkslahss\
 \n");
    printf("Value of A is %d and Value of B is %d\n",a,b);
    swap(a,b);
    printf("After Swap:\nValue of A is %d and Value of B is %d\n",a,b);
    
    system("pause");return 0;
    }
