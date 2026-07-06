//to find factorial
#include<stdio.h>
void main()
{
	int f=1,n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n ;i++)
	{
		f=f*i;
	}
	printf("factorial=%d", f);
}
