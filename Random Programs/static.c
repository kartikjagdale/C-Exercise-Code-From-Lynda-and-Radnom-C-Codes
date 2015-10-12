/*Author: Kartik Jagdale */
/*
The static keyword can be used in four different ways: 

to create permanent storage for local variables in a function,
to create a single copy of class data,
to declare member functions that act like a non-member functions, and
to specify internal linkage.

*/
#include<stdio.h>
/*
Permanent storage
Static local variables keep their value between function calls. 
For example, in the following code, a static variable inside a function is used to keep track of how many times that function has been called: 
*/
void foo(){
     static int counter = 0;
    printf( "\n Foo function is being called %d times",++counter);
     
     
     }
int main(){
    int i;
    for(i =0;i<10;i++) foo();
 system("pause");
 return 0;   
}

