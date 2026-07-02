//to check if a number is multiple of both 3 and 7
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d", &a);
	if(a%3==0)
	printf("The number is a multiple of 3");
	else if(a%7==0)
	printf("The number is a multiple of 7");
	else
	printf("The number is not  multiple of 3 and 7");
}
