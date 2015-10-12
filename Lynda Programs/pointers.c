/*Author: Kartik Jagdale */
/* Some Experiments with pointers */

#include<stdio.h>

int main(int argc, char **argv){
    int x=10, y;
    int *ptr;
    ptr = &x;
    printf("Value of X is %d\n",x);
    printf("Value pointed by ptr is %d\n",*ptr);    
    y  = *ptr;
    printf("Value of Y is %d\n",y);    
    y++;
    ptr = &y;
    printf("Now the Value pointed by ptr is value of y, i.e %d\n",*ptr);    
    system("pause");
    return 0;
}
