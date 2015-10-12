/*
Name : Logical operator Demo
Author: Kartik Jagdale
*/


#include<stdio.h>

int main(int argc, char**argv){
    int i, j;
    i = 1;
    j = 1;

    if(i&&j){
        printf("Hey AND is Working");
    }

    /*Lets make one of them Zero and see */
    j = 0;
    if(i && j){
        printf("\nAND is still working after makng J a Zero");

    }
    else{printf("\nOops AND is not working after makng J a Zero");
}

/*OR Operator checking */
    if(i || j){printf("\nHey OR is working still after making j a Zero, i.e one must be true");}
    else{printf("No OR not working");}


/*Not Oeration checking*/

if(!i){printf("\nNot i is not working");}
else{printf("\nNot I is working");}

i = 0;
    if(!(i)==1){printf("\nMaking I One by ! is working");}
    else{printf("\nMaking I One is not working");}
    printf("\n");
    return 0;}
