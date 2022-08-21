//WAP to print all elements present in the last column top to buttom
#include <stdio.h>
void main(){
	int i,j,arr[4][4];
	printf("Enter matrix element as matrix form : \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("last column top to buttom : \n");
	for(i=0;i<4;i++){
		printf("%d\n",arr[i][3]);
	}
	
	
	
}
