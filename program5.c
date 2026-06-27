#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value to be swapped:");
	scanf("%d%d",&a,&b);
	printf("the vale of a before swapping:%d\n",a);
	printf("the vale of b before swapping:%d\n",b);
	c=a;
	a=b;
	b=c;
	printf("the vale of a after swapping:%d\n",a);
	printf("the vale of b after swapping:%d\n",b);
}
