#include<stdio.h>
#include<stdlib.h>
int pow(int m, int n);

main()
{
	int i;
	for(i=0;i<10;i++){
		printf("%d \n",pow(2,i));
	}

	system("pause");
	return 0;
}
//Power Function;
int pow(int base, int n){
	if(n!=0){
		int p = 1;
		for(int i=1;i<=n;i++){
			p = p*base;
		}		
		return p;
	}
	else 
		return 0;
}
