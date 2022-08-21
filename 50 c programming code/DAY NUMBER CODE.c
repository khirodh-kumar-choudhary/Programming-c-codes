#include <stdio.h>
// lab 09/05/2022  lab4
// day number code
int main (){
	int a;
	printf("Enter the day no.(1-7) :  ");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thrusday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("invalid input");
			
	}
	return 0;
}
