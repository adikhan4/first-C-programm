//to checck if a person is eligible to vote
#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age of the person:");
	scanf("%d", &age);
	if(age>18)
	printf("The person is eligible to vote");
	else
	printf("Better luck next time");
}
