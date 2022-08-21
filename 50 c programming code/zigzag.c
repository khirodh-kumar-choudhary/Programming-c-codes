#include <stdio.h>
int main()
{
	int m,n,i,j,p,a[10][10],b[10][10];
	printf("enter the values of m and n \n");
	scanf("%d %d",&m,&n);
	printf("enter the values of matrix1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the values of matrix2\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("summation:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			p=a[i][j],b[i][j];
			printf("%d",p);
		}
		printf("\n");
	}
	return 0;
}

