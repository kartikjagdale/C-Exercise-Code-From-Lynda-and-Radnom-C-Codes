/*Author: Kartik Jagdale */
#include<stdio.h>
#define iOne (1)
#define iTwo (2)
#define iThree (3)
int main(int argc, char ** argv){
    int foo = 3;
    
    switch(foo){
    case iOne:
         puts("foo is 1");
         break;
    case iTwo:
         puts("foo is 2");
         break;
    case iThree:
         puts("foo is 3");
         break;
    default:
            puts("Default");
            break;             
    }


system("pause");
return 0;
}
