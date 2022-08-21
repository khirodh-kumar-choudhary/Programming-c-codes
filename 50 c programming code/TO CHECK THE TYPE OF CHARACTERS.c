#include <stdio.h>
int main(){
	
	// check charector
	char a;
	printf("Enter any one charecter : ");
	scanf("%c",&a);
	if (a>='a' && a <='z' || a>='A' && a<='Z'){
		if(a>='a' && a <='z')
			printf("%c charecter is a Small alphabate ",a);
		else if(a>='A' && a<='Z')
			printf("%c charecter is a Capital alphabate ",a);
		
	}
	else if(a>='0' && a<='9'){
		printf("%c charecter is a Number ",a);
	}
	else{
		printf("%c charecter is a special charecter");
	}

    return 0;
}
