#include <stdio.h>
// lab 09/05/2022  lab4
//code for checking a charector is vowell or consonant
int main (){
	char a;
	printf("Enter any alphabate ");
	scanf("%c",&a);
	
	switch(a){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c is a vowel",a);
			break;
		default:
			printf("%c is constant",a);
	}
	return 0;
}
