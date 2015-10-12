/*Author: Kartik Jagdale */
/* Take Input using C */
#include<stdio.h>
enum {max_length = 127}; /* declare constant */
static char response[max_length];
int main(int argc, char ** argv){
 printf("Type a String ");
 fflush(stdout);
 fgets(response, max_length, stdin);
 printf("The String is %s \n",response);
 system("pause");
 return 0;   
}
