/*Author: Kartik Jagdale */

/* Array */
#include<stdio.h>

int main(int argc, char ** argv){
    int ia[5]; /*declare an array */
    int *ip;
    ip = ia; /*Note that no & symbol is used as array itslef is a pointer */
    *ip = 1; /* 1sts element of array i.e ia[0] = 1 */
    ++ip; /*Pointes to the second element */
    *ip = 2; /* second element of array ia[1] = 2 */
    *(++ip) = 3; /* 3rd element of array ia[2] = 3 also equivalent to *(ip+1) */
    
    printf("Now we will see Character Pointers and special case of Array\n");
    /* Various forms of Declaration of character strings */
    char s[] = {'s','t','r','i','n','g',0};
    char p[] = "string";
    printf("String is %s\n",p);
    /* another method to print is using for loop */
    int i ;
    for(i=0;p[i]!='\0';++i)
    {
     printf("char p[%d] is %c\n",i, p[i]);
    }
    /* another method to print is using for loop  with character pointers */
    char *cp;
    printf("Using Character Pointer\n");
    for(cp=s;*cp;++cp)
    {
     printf("char is %c\n",*cp);
    }
    
    system("pause");
 return 0;   
}
