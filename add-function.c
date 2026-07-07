//to make a addition function
#include<stdio.h>
void add(int*,int*);
void add(int *a,int *b)
{
	printf("sum=%d",*a+*b);
}
void main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	add(&a,&b);
}
