/*Author: Kartik Jagdale */
#include<stdio.h>

int main(){
    int x = printf("Hello, World!\n"); /*Printf returns an integer value. it returns "number" of characters printed. */
    printf("printf returned %d\n",x); 
    /*Also we can perform calculations as printf returns integer value */
    int y =  printf("Hello, World!\n") * 5; /* printf times 5 */
    printf("printf returned %d\n",y); /* 14 * 5 = 70 */
    system("pause");
    return 0;   
}

/*
Output:
Hello, World!
printf returned 14
Hello, World!
printf returned 70
Press any key to continue . . .

*/
