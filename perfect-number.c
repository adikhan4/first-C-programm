//to check if a number is a perfect number
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n ;i++)
	{
		if(n%i==0 && i!=n) 
		sum=sum+i;
	}
	if(sum==n)
	printf("it is a perfect number");
	else
	printf("not a perfect number");
 }
