//Fahernheit-Celsius
// Author: Kartik Jagdale
/*
Print F-C table for Fahr = 0,20,...,300*/
#include<stdio.h>

main(){
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr<=upper){
		celsius = 5 * (fahr-32)/9; //formula for calcuating celsuis from fahr..
		printf("%3d %6d\n",fahr,celsius); //3d = 3 digits wide and 6d = 6 digits wide ;to make o/p look good;  
		fahr = fahr + step;
	}

}


/*Output:
 0    -17
 20     -6
 40      4
 60     15
 80     26
100     37
120     48
140     60
160     71
180     82
200     93
220    104
240    115
260    126
280    137
300    148
[Finished in 1.8s]
*/