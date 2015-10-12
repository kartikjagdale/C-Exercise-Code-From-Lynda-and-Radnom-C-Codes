/*
Name: SUBINC/OCT15
Author: VoidZero Aka Joker
Note: Second Submission to pass 3rd Subtask
>>Changes made are [int A[]] to [long long A[]]
*/

#include<stdio.h>
#define MAX 100000
int TotalSubArray(long long[], int);
int main(){
int T, N,i;
long long A[MAX];
	scanf("%d",&T);

	while(T--){
		scanf("%d",&N);
		for(i = 0;i<N;i++){
			scanf("%d",&A[i]);
		}
		int total = TotalSubArray(A,N);
		printf("%d\n",total);
	}


return 0;}


/*TotalSubArray Function*/
int TotalSubArray(long long a[],int n){
int i, j, total = n;
for(i = 0;i<n-1;i++){
    j = i;
    while(j!=n-1){
        if(a[j]<a[j+1]){
            total = total + 1;
        }
        else{
            break;
        }
        j++;
    }
}

return total;
}
