#include <stdio.h>
// wap to print twin prime numbers under first 100  prime number


int main(){
	// print first 100 prime number
	int count,n,i,p;
	int k=1;
	n=2;
	count=0;
	int twin[2];
	twin[1]=n;
	printf("program running.......\n");
	while(k<=100){
		for (i=2;i<n;i++){
				if (n%i==0){
					count=1;
				}
		}
		if(count==0){
			twin[2]=n;
			p=twin[2]-twin[1];
			k++;
			if(p==2){
				printf("(%d,%d) \n",twin[1],twin[2]);
			}
			twin[1]=twin[2];
		}
		count=0;
		n++;
	}
	printf("\n\n end....\n");
	return 0;
}
