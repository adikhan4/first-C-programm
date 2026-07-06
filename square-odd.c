//to print square of odd number in a series
#include<stdio.h>
void main()
{
	int sq,n,i;
	printf("Enter the ending of the series");
	scanf("%d",&n);
	for(i=1;i<=n ;i++)
	{
		if(i%2!=0)
		{
		sq=i*i;
		printf("%d\t",sq);
	    }
	}
}
