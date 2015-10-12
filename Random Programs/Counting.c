/*Count lines , words, and charachtrers, digits in input*/
//Author: Kartik Jagdale
#include<stdio.h>
#include<stdlib.h>

int main(void){
	int c, nl, nw, nc, ndigit[10]={0},tcount;
	nl = 0;
	nw = 0;
	nc = 0;
	tcount=0;

	while((c=getchar())!=EOF){
		
		if(c=='\n')
			++nl;
		if(c==' '||c=='\n'||c=='\t')
			++nw;
		if(c!=' '&&c!='\n'&&c!='\t')
			++nc;
		if(c>='0'&&c<='9')
			++ndigit[c-'0'];

	}

	printf("Number of lines are %d\n",nl);
	printf("Number of words are %d\n",nw);
	printf("Number of charachtrers are %d\n",nc);
	printf("Number of Digits are\n");
	for(int i=0;i<10;i++){
		printf("%d ",ndigit[i]);
		tcount = tcount + ndigit[i];
	}
	//getch();
	printf("\nNumber of Total Digits are %d\n",tcount);
	system("pause");
	return 0;

}
