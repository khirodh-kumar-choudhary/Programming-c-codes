#include <stdio.h>
void main (){
	
	//leap year check
	
	int a;
	printf("enter year : ");
	scanf("%d",&a);
	if(a%4==0 && a%100!=0){
		printf("year is leap");
	}
	else if(a%100==0 && a%400==0){
		printf("year is leap");
	}
	else{
		printf("year is not leap year");
	}
}
