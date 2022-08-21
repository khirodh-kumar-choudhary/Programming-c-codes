#include <stdio.h>
int main(){
	
	//program to find largest no. among three numbers using if else condition
    float a,b,c,p;
    printf("enter all three numbers : ");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b && a>c)
    {
    printf("%.2f is largest",a);
    }
    else if(b>c && b>a)
    {
    printf("%.2f is largest",b);
    }else
    {
    printf("%.2f is largest",c);
    }
    return 0;
}
