//Fahernheit-Celsius
// Author: Kartik Jagdale
/*
Print F-C table for Fahr = 0,20,...,300*/
//In revers order 300 to 0;
// #define is a symbolic constant
//#define name replacement text
#include<stdio.h>
#define LOWER 0 // notice that there's no semicolon at the end of define 
#define UPPER 300
#define STEP 20 
main(){
	int fahr;
	printf("Celsius to Fahrenheit Table\n");
	for(fahr=UPPER;fahr>=LOWER;fahr=fahr-STEP){
		printf("%3d %6.2f\n",fahr,(5.0/9.0)*(fahr-32)); // .2f is the two digits after decimal
	}
	return 0;
}