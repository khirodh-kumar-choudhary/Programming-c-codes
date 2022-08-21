#include <stdio.h>
// wap to print first 100  prime number


int main(){
	// print first 100 prime number
	int count,n,i;
	int k=1;
	n=2;
	count=0;
	printf("program running.......\n");
	while(k<=100){
		for (i=2;i<n;i++){
				if (n%i==0){
					count=1;
				}
		}
		if(count==0){
			printf("%d : %d\n",k,n);
			k++;
		}
		count=0;
		n++;
	}
	printf("end....\n");
	return 0;
}
