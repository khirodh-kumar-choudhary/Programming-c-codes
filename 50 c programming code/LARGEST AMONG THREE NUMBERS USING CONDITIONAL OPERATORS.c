#include <stdio.h>
int main(){
	
	// program to find largest no. among three numbers using conditional operator
	
    float a,b,c,p;
    printf("enter all three numbers : ");
    scanf("%f %f %f",&a,&b,&c);
    p= ((a>b)?((a>c)?a:c):((b>c)?b:c));
    printf("%.2f is largest among all three",p);

    return 0;
}
