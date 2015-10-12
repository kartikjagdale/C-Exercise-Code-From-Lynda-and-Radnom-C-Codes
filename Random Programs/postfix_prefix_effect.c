/*Author: Kartik Jagdale */
//Check effect of postfix and prefix 

#include<stdio.h>
main(){
	int x = 0;
	while(++x){ //Prefix Expression
		printf("if this is shown in o/p then it Succeds in entering the loop regardless of value zero\n");
		printf("X in prefix is %d\n",x);
		break;
	}
	x=0;
	while(x++){ //postfix expression
		printf("if this is shown in o/p then it Succeds in entering the loop regardless of value zero");
		printf("X in postfix is %d\n",x);
		break;
	}
}
/*
OUTPUT:
if this is shown in o/p then it Succeds in entering the loop regardless of value zero
X in prefix is 1
[Finished in 1.8s]

NOTE: Given above we can enter the while loop if its is prefix incremnet on x given x is zero;
i.e incremnets first and then checks the value;

secondly we can't enter the while loop if it is a postfix expression given value of x is zero;


*/
