//to print max value of an array
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the number of elment of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the array\n");
	int max=a[0];
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
    }
	for(i=0;i<5;i++)
	{
		if(max<a[i]);
		max=a[i];
    }
    printf("the maximum val is:%d",max);
}
