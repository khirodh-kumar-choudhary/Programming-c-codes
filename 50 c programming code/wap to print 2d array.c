#include <stdio.h>
int main()
{
  int i,j; 
  	int arr[3][2] = {{50,60},{70,80},{90,100}};
  
  
  	printf("The elements are:\n");

   	for(i=0; i<3; i++)
	{
    
    for(j=0; j<2; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n"); 
  	}

  	return 0;
}
