//sorting 1d array
#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the number of element of an array:");
	scanf("%d",&n);
	int a[n],temp=0;
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a);
    }
    printf("array before sorting:\n");
	for(i=0;i<n;i++)
    {
    	printf("%d\n",a);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			temp=a[i];
			a[i]=a[j];
			a[j]=a[j];
		}
	}
    printf("array after sorting:\n");
	for(i=0;i<n;i++)
    {
    	printf("%d\n",a);
	}
}
