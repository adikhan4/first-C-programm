//
#include<stdio.h>
void main()
{
	int temp,i,n;
	printf("enter the number of element of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
    }
    printf("%d\t",a[i]);
}
