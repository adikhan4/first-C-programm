//to check insurance premium
#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age");
	scanf("%d",&age);
	if(age<25)
	printf("high premium");
	else if(age>25 && age<50)
	printf("middle premium");
	else if(age>50)
	printf("low premium");
	else
	printf("not applicable");
}
