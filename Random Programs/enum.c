/*Author: Kartik Jagdale */
#include<stdio.h>
/*
The enum keyword is used to create an enumerated type named name that consists of the elements in name-list. 
The var-list argument is optional, and can be used to create instances of the type along with the declaration. 
For example, the following code creates an enumerated type for colors

Syntax:
       enum name {name-list} var-list;
*/
enum ColorT {red, orange, yellow, green, blue, indigo, violet}; 
/* enum sets each color value in consecutive manner like red = 0, orange = 1 and so on..
you can also give user defined values to the keys.
 */

int main(){
    
    enum ColorT c1 = indigo; /*Note the extra "enum" in C you have to specify Enum before you create an instance*/
    printf("Value of Indigo is %d\n",indigo);
    if(c1 == indigo){
          printf("c1 is indigo\n");
          }
    system("pause");
    return 0;
}
