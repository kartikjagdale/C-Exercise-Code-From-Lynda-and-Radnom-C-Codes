/*Author: Kartik Jagdale */

/*Three Branching Controls:
        1.Goto
        2.Break
        3.Continue */
#include<stdio.h>


int main(){
    printf("Goto Representation:\n\n");
    printf("Before the Goto Statement\n");
    goto target;
    printf("This Statement will never be executed");
    target: /* Target is a label */
            printf("At Target\n");
    printf("\nBreak Representation\n\n");
    int i;
    for(i=0;i<10;i++){
          if(i==5) break;
          printf("i is %d\n",i);
          }
    
    printf("\nContinue Representation\n\n");
    for(i=0;i<10;i++){
          if(i==5) continue; /* Should Skip 5 and print before and furthur numbers */
          printf("i is %d\n",i);
          }
    
 system("pause");
 return 0;   
}

