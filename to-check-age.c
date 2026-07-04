//to check if a person is child,teenager,adult or senior citizen
#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age of the person:");
	scanf("%d",&age);
	if(age<13)
	printf("The person is a child");
	else if(age>=13 && age<20)
	printf("The person is a teenager");
	else if(age>=20 && age<60)
	printf("The person is an adult");
	else
	printf("The person is a senior citizen");
	
	
}
