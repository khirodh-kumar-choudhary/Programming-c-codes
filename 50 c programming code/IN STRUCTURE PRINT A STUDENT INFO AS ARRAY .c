// WAP T ENTER 10 STUDENT INFO AND FIND OUT THE STUDENTS , WHO GOT HIGHESST?
#include <stdio.h>
struct student
{
	int roll;
	char name[20];
	int marks;
}info[10];
int main()
{
	int i, a;
	for ( i=0; i<10; i++)
	{
		printf("ENTER THE %d STUDENT ROLL NO: ",i+1);
		scanf("%d",&info[i].roll);
		printf("ENTER THE %d STUDENT NAME: ",i+1);
		scanf("%s",&info[i].name);
		printf("ENTER THE %d STUDENT MARKS: ",i+1);
		scanf("%d",&info[i].marks);
	}
	for (a=0; a<10; a++)
	{
		printf("\nNAME = %s, ROLL NO = %d, MARKS = %d",info[a].name,info[a].roll,info[a].marks);
	}
	int max, m;
	max = info[i].marks;
	for (m=0; m<10; m++)
	{
		if(info[m].marks>max)
			max = info[m].marks;
	}
	printf("\n\nHIGHEST MARKS: %d",max);
}
