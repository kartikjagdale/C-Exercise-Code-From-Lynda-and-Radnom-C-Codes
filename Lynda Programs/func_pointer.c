/*
Name: Function Pointers:
Author: Kartik Jagdale

Dscription: Demo of Func pointer;
*/

#include<stdio.h>

void a(){printf("\nThis is a()");}
void b(){printf("\nThis is b()");}
void c(){printf("\nThis is c()");}
void d(){printf("\nThis is d()");}
void e(){printf("\nThis is e()");}

void (*func_ptr[])() = {a,b,c,d,e,NULL};/*Array of func pointer*/
int jump(char*);
int prompt();

int main(int argc, char**argv){
    while(prompt());
    puts("\nDone !!!");

return 0;
}


int prompt(){
    puts("Choose an Option\n");
    puts("");
    puts("1. Function a()");
    puts("2. Function b()");
    puts("3. Function c()");
    puts("4. Function d()");
    puts("5. Function e()");
    puts("Q. Quit");
    printf(">> ");
    char *response, ch;
    response = &ch;
    unsigned short int num = 1;
    fflush(stdin);
    scanf("%c",response);
return jump(response);

}


int jump(char *ch){
    char code = *ch;
    if(code == 'q' || code == 'Q') return(0);

    int func_length;
    for(func_length = 0; func_ptr[func_length]!=NULL;func_length++);//To get Function Length
    unsigned int i = (int)code -'0';
    --i; //List is Zero based
    if((i<0) || (i>8)){
        puts("\nInvalid Choice !!!");
        return(1);
    }

    if(i<func_length){
        func_ptr[i]();//Call function in array of func ptr;
        return(1);
    }
    else{
        puts("Invalid Choice !!!");
        return(1);
    }


}
