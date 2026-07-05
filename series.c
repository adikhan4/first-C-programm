//to print series using for loop
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the ending of the series");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
}
