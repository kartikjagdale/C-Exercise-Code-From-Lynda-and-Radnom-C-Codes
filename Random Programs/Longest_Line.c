//To print the longest line ;
//Author: Kartik Jagdale


#include<stdio.h>
#include<stdlib.h>
#define MAXLINE 100 // Max number of line size

int getline(char line[]);
void copy(char to[], char from[]);

main(){

	char line[MAXLINE];
	char longest[MAXLINE];
	int max, len;
	max = 0;

	while((len=getline(line))>0){
		printf("Current line Length is %d\n",len);
		if(len>max){
			max = len;
			copy(longest,line);
		}
		
	}
	if(max>0){
			printf("Max Length of Input Line is: %d\n", max);
			printf("%s\n",longest);
		}

	system("pause");
	return 0;
}

//Function to Get Line from the user 
int getline(char line[]){
	int i=0, c;

	for(i=0;i<MAXLINE-1 &&(c=getchar())!=EOF && c!='\n'; ++i){
		line[i] = c;
	}
	if(c=='\n'){
		line[i]=c;
		++i;
	}
	line[i] = '\0';
	return i;
}

//Function to Copy Longest Line
void copy(char to[], char from[]){
	int i = 0;
	while((to[i]=from[i]) != '\0'){
		++i;
	}
}