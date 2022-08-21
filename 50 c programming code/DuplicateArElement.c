// count a total number of duplicate element in an array

#include <stdio.h>
int main(){
	printf("program running.......\n");
	int i,j,n;
	int count=0;
	int flag=1;
	int arr1[100],arr2[100],arr3[100];
	printf("enter size of array 1-100 : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the%d element  : ",i);
		scanf("%d",&arr1[i]);
	}
	
	
	for(i=0;i<n;i++){
		arr2[i]=arr1[i];
		arr3[i]=0;
	}


	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr1[i]==arr2[j]){
				arr3[i]=flag;
				flag++;
				
			}
		}
		flag=1;
	}
	for(i=0;i<n;i++){
		if(arr3[i]>=2){
			count++;
		}
	}
	printf("Total duplicate element is : %d ",count);
	return 0;
}
