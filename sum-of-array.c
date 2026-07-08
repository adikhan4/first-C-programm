//the sum of all element of an array
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter the number of elment of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the array\n");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
    }
	for(i=0;i<5;i++)
	{
	  sum=sum+a[i];
    }
    printf("the sum:%d",sum);
}
