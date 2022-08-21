//WAP to print the boundry element of a matrix and display their sum;
#include <stdio.h>
int main(){
	int n,sum=0;
	printf("Enter the size of matrix : ");
	scanf("%d",&n);
	int i,j,arr[n][n];
	printf("Enter matrix element as matrix form : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0||i==n-1||j==0||j==n-1){
				printf("%d ",arr[i][j]);
				sum+=arr[i][j];
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("and the sum of boundry elements is : %d",sum);
}
