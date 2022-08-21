//5. WAP to print maximum and minimum element of each column of the matrix;
#include <stdio.h>
int main(){
	int n,max,min;
	printf("Enter the size of matrix : ");
	scanf("%d",&n);
	int i,j,arr[n][n];
	printf("Enter matrix element as matrix form : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		max=0,min=arr[0][i];
		for(j=0;j<n;j++){
			if(arr[j][i]<min)
				min=arr[j][i];
			if(arr[j][i]>max)
				max=arr[j][i];
		}
		printf("max element of %d column : %d, ",i+1,max);
		printf("min element of %d column : %d, \n",i+1,min);
	}
	
}
