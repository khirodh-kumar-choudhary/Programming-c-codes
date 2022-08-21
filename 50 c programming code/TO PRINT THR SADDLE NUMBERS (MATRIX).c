//1.
#include <stdio.h>
void main(){
	int i,j,k,arr[4][4];
	int flag,s_count=0;
	printf("Enter matrix element as matrix form : \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			flag=1;
			for(k=0;k<4;k++){
				if(arr[i][j]<arr[i][k] && arr[i][j]>arr[k][j])
					flag++;
			}
			if(flag==3){
				s_count++;
				printf("saddle point is  %d(%d,%d)",arr[i][j],i,j);
			}
				 
		}	
	}
	if(s_count==0)
		printf("saddle point is not exist");
}
