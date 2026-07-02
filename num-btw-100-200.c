//to check if a number lies between 100 and 200
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d", &a);
	if(a>100 && a<200)
	printf("The number lies btw 100 and 200");
	else
	printf("The number does not lies btw 100 and 200");
}
