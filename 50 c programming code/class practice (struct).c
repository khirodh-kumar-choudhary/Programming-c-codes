#include <stdio.h>
struct node 
{
	int data1;
	int data2;
	struct node *link;
};
int main()
{
	struct node n1;
	n1.data1 = 5;
	n1.data2 = 10;
	n1.link = NULL ;
	
	struct node n2;
	n2.data1 = 15;
	n2.data2 = 20;
	n2.link = NULL ;
}
n1 link = &n2 ;

printf("n1data1 = %d",n1 link=>data1);
printf("n2data2= %d",n1 link=>data2);
return 0;
}




