/*Author: Kartik Jagdale 
Description: Here we will see caveats in macros i.e Limitations of macros and 
why they should be used carefully.
*/

#include<stdio.h>
#define MAX(a, b) ((a)>(b)? (a):(b))

int increment();
int main(int argc, char**argv){
    int x =50;
    
    printf("\nThe Max of %d and %d is %d\n\n",
                x,increment(),MAX(x, increment()));

/* Calling for second Time for more evaluation */

   printf("\nThe Max of %d and %d is %d\n\n",
                x,increment(), MAX(x, increment()));
    
    system("pause");
    return 0;
    }
int increment(){
    static int i = 42;
    i +=5;
    printf("Incremented value of i is %d\n",i);
    return i;
    }
/*
Output:
       
    Incremented value of i is 47
    Incremented value of i is 52
    
    The Max of 50 and 52 is 50
    
    Incremented value of i is 57
    Incremented value of i is 62
    Incremented value of i is 67
    
    The Max of 50 and 67 is 62

    Press any key to continue . . .

*/
