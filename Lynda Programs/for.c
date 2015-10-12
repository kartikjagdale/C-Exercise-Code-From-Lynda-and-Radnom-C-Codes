/*Author: Kartik Jagdale */
#include<stdio.h>

int main(int argc, char **argv){
 int i;
 printf("Simple For loop:\n");
 for(i=0;i<5;i++){
                  printf("The value of i is  %d\n",i);
 } 
 int *ptr;i= 0;
 printf("\nUsing Pointer Varaible:\n");
 for(ptr = &i;*ptr<5;++(*ptr)){
          printf("The Value of Ptr i is %d\n",*ptr);
          }
int ia[] = {1,2,3,4,5,0}; /* See the last value is 0 to indicate Null or termination of Array*/
ptr = ia; /* see no need of & while pointing to array as array itself is a pointer */
printf("\nUsing Pointer Varaible in array:\n");
printf("\nValue of ia(the array first address) is %d\n",ia);
int c;
for(;*ptr;++ptr){
          printf("Array value at ia[%d] is  %d\n",ptr,*ptr);
          c = ptr-ia;
          printf("The value of ia-ptr(current pointer) is %d\n",c);
}
printf("\nUsing Pointer Varaible in array:\n");
for(ptr = ia;*ptr;++ptr){
          printf("Array value at ia[%d] is  %d\n",ptr-ia,*ptr);
}
 
 system("pause");
 return 0;   
}
