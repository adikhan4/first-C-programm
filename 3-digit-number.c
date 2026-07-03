//to check if given number is 3 digit number
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d", &a);
	if(a>=100 && a<=999)
	printf("The number is a 3 digit number");
	else
	printf("The number is not a 3 digit number");
}
