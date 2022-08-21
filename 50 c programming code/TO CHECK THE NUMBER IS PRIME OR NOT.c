#include <stdio.h>
// wap to find weather a number is prime or not


int main(){
	int n,i;
	int flag=0;
	printf("enter the number : ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0)
			flag=1;
		
	}
	if(flag==0)
		printf("this is prime number");
	else
		printf("this is not prime number");
		
	
}
