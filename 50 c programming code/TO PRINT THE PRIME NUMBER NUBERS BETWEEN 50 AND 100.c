#include <stdio.h>
// wap to print prime number between 50 and 100

int main(){
	int i;
	int k=1;
	int n=2;
	int count=0;
	printf("program running.......\n");
	printf("sl no. : prime number\n");
	printf("______   ____________\n");
	for(n=50;n<=100;n++){
		for (i=2;i<n;i++){
			if (n%i==0){
					count=1;
				}
		}
		if(count==0){
			printf("   %d   :      %d      \n",k,n);
			k++;
		}
		count=0;
		
	}
	printf("\n\nend....\n");
	return 0;
}


