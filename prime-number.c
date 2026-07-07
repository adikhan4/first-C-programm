//to check if a number is a prime number
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
	printf("Prime number");
	else
	printf("not a prime number");
}
