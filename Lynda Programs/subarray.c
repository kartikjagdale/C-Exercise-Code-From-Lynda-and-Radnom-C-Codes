#include<stdio.h>
#define MAX 100

int TotalSubArray(int[], int);
int main(){
	int T, N,A[MAX];

	printf("Test Cases: ");
	scanf("%d",&T);
	int i =1, j;
	while(T--){
		printf("\nSize of Array No. %d : ", i);
		scanf("%d",&N);
		for(j = 0;j<N;j++){
			scanf("%d",&A[j]);
		}
		int total = TotalSubArray(A,N);
		printf("\nTotal Non-Decreassing SubArray are: %d",total);
		i++; // increase the count of Array Serial numbers
	}

	return 0;
}


int TotalSubArray(int a[],int n){
int i, j, total = n;
printf("\nInitial Total is %d",total);
for(i = 0;i<n-1;i++){
    j = i;
    while(j!=n-1){
        if(a[j]<a[j+1]){
            printf("\nComparing %d and %d ",a[j],a[j+1]);
            total = total + 1;
            printf("\nTotal is %d",total);
        }
        else{
            break;
        }
        j++;
    }
}

return total;
}
