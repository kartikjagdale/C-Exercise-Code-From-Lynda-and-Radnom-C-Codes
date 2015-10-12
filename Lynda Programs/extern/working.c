/*Author: Kartik Jagdale */
#include<stdio.h>
/*
int var = 10;
int main(int argc, char**argv){
    printf("The variable value is %d\n",var);
    system("pause");
    return 0;   
}
output:
       The variable value is 10
Press any key to continue . . .
*/
/*
Comment: here there is a error as variable is declared after the main(outside the scope) as main is called first and the var(below main)

int main(int argc, char**argv){
    printf("The variable value is %d\n",var);
    system("pause");
    return 0;   
}
int var = 10;
 
output:
       Error:
       In function 'main'
       `var' undeclared (first use in this function) 
*/
/*
comment: as the var is not static every time the loop starts the variable 'var''s value is again changed to 10 therefore no increment;
int main(int argc, char**argv){
    int i;
    for(i=0;i<5;i++){
        int var = 10;
        printf("The variable value is %d\n",var++);
    }
    system("pause");
    return 0;   
}
output:
           The variable value is 10
    The variable value is 10
    The variable value is 10
    The variable value is 10
    The variable value is 10
    Press any key to continue . . .
*/
/*
int main(int argc, char**argv){
    int i;
    printf("Note the extra keyword 'Static'\n");
    for(i=0;i<5;i++){
                     
        static int var = 10;  
        printf("The variable value is %d\n",var++);
        
    }
    system("pause");
    return 0;   
}
    output:
           Note the extra keyword 'Static'
    The variable value is 10
    The variable value is 11
    The variable value is 12
    The variable value is 13
    The variable value is 14
    Press any key to continue . . .


*/
/*
output: variable 'var' is declared in if statement so it is out of scope of the current program it will give error;
int main(int argc, char**argv){
    if(1){
          int var = 10;
          }
    printf("The value of varaible is %d",var);
    system("pause");
    return 0;   
}
output:
       error:
             `var' undeclared (first use in this function) 
*/
/*
comment: should give error in earlier versions of  c // so depends on the compiler version
extern func_var;
extern void func();
int main(int argc, char**argv){
    printf("The value of external varaible is %d",func_var);
    system("pause");
    return 0;   
}
output : 
*/

#include "func.c"
int main(int argc, char**argv){
    func(); /*Should output the print statement in included func.c file */
    printf("\nThe value of external varaible is %d\n",func_var);
    system("pause");
    return 0;   
}

/*output:
       This is a external function call
       The value of external varaible is 10
       Press any key to continue . . .

*/

