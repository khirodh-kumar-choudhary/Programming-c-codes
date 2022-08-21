//7. WAP to print all elements present in the first row from left to right
#include <stdio.h>
void main(){
	int i,j,arr[4][4];
	printf("Enter matrix element as matrix form : \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nfirst row left to right : ");
	for(i=0;i<4;i++){
		printf("%d, ",arr[0][i]);
	}
	printf("\nlast column top to buttom : \n");
	for(i=0;i<4;i++){
		printf("%d\n",arr[i][3]);
	}
	printf("\nlast row right to left : \n");
	for(i=3;i>=0;i--){
		printf("%d, ",arr[3][i]);
	}
	printf("\nfirst column buttom to top : \n");
	for(i=3;i>=0;i--){
		printf("%d\n",arr[i][0]);
	}
	
	
	
}
