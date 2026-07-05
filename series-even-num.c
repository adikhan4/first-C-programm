//to print series of even numbers
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the ending of the series");
	scanf("%d",&n);
	for(i=1;i<=n ;i++)
	{
		if(i%2==0)
		printf("%d\t",i);
	}
}
