//sawpping without 3rd variabe
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two number for swapping:");
	scanf("%d %d",&a,&b);
	printf("The value of 'a' before swapping:%d\n",a);
	printf("The value of 'b' before swapping:%d\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The value of 'a' after swapping:%d\n",a);
	printf("The value of 'b' after swapping:%d\n",b);
}
