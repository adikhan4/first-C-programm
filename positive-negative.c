//finding positive or negative number
#include<stdio.h>
`void main()
{
	float a;
	printf("Enter a number:");
	scanf("%f", &a);
	if(a==0)
	printf("The number is zero");
	else if(a>0)
	printf("The number is a positive number");
	else if(a<0)
	printf("The number is a negative number");
}
