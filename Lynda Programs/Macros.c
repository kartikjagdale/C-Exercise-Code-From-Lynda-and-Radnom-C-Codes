/*Author: Kartik Jagdale */

#include<stdio.h>
#define MUL(a, b) ((a)*(b)) /*Putting everything in Paraenthesis is is good practice */

#define MAX(a, b) ((a)>(b) ? (a) : (b))

int main(int argc, char**argv){
    int a = 10;
    int b = 20;
    printf("A value is %d, B Value is %d and A * B is %d\n",a, b, MUL(a, b) );
    printf("Max of %d and %d is %d\n", a, b, MAX(a, b));
 system("pause");
 return 0;   
}
