//to check if person is passed,got supply or failed
#include<stdio.h>
void main()
{
	int marks;
	printf("Enter the marks of the subject:");
	scanf("%d",&marks);
	if(marks>=33)
	printf("pass");
	else if(marks<33 && marks>20)
	printf("supply");
	else
	printf("fail");
}
