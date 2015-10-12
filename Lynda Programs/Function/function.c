/*Author: Kartik Jagdale */
/*Functions
1. Call By Value
2. Call by Reference
 */
#include<stdio.h>
#include "func.h"

int main(int argc, char**argv){
    int x, y;
    x = 10;
    y = 10;
    printf("Call By value Result is: %d\n", func_call_by_value(x));
    func_call_by_reference(&y);/* We are passing the address of y by subscript '&' */
    printf("Call By reference Result is: %d\n ",y);      
 system("pause");
 return 0;   
}
/* Call by Value Function */
int func_call_by_value(int x){
    int i = 0;
    i +=25;
    return (x+i);/* Returns Value which is copied there */
}

/* Call By refrence Function */
void func_call_by_reference(int *x){
     int i = 0;
     i +=25;
     *x = *x+i;
     }
