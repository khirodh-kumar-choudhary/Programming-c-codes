#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("Enter Element at %d%d position:",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");

	}
	
	/* writing the code for zigzag elements*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==0||i+j==2||i==3)
			{
				printf("%d ",a[i][j]);
			}
		}
	}
	/* Adding the zigzag elements */
	
	
	return 0;

}


