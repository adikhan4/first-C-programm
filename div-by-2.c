//to check if a given number is divisible by 2 and not 5
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if(a%2==0 && a%5!=0)
	printf("The number is divisible by 2 and not by 5");
	else
	printf("not divisible");
}
