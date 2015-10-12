/*
File Copying
Getchar and Putchar
*/

#include<stdio.h>
/*copy input to output 1st version*/
main(){
	int c;
	printf("File Copying\n");
	c = getchar();
	//printf("EOF:\n",EOF);
	/*while((c=getchar())!=EOF){
		putchar(c);
		//c= getchar();
	} */
	
	
		while(c!=EOF){
			putchar(c);
			c=getchar();
		}
	return 0;
}