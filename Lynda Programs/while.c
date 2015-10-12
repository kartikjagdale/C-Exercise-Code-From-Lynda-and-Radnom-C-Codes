/*Author: Kartik Jagdale */
#include<stdio.h>

int main(int argc, char **argv){

int i = 5;
printf("Pre DeIncrement\n");
    while(--i){
                printf("%d\n",i);   
    
                }/* output is 4,3,2,1 */
i = 5;
printf("Post DeIncrement\n");
    while(i--){
               printf("%d\n",i);   
               }/* Output is 4 3 2 1 0*/

i =5;
printf("Using Do-While Loop (Pre DeIncrement)\n");

    do{
                  printf("%d\n",i);
    }while(--i);/* Output is 5 4 3 2 1*/
i = 5;
printf("Using Do-While Loop (Post DeIncrement)\n");


    do{
                      printf("%d\n",i);
    }while(i--); /* Output is 5 4 3 2 1 0*/
                           
system("pause");
return 0;   
}
