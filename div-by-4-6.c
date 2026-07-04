//to check if a number is divsible by 4 and 6
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if(a%4==0 && a%6==0)
	printf("The number is divisible by 4 and 6");
	else
	printf("not divisible by 4 and 6");
}
