#include<stdio.h>

int excel_alphabets_num(char*s){
	int k = 0;
	while(s&&*s){
		k=k*26+(*s)-'A'+1;
		s++;
		
	}
	return k;
}
int main(){
	int i,b=0,size=0;
	char c,a[100];
	printf("Enter the char :");
	scanf("%s",&a);
	size=excel_alphabets_num(a);
	printf("%d",size);
	return 0;
	
}
