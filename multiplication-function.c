//to make multiplication function
#include<stdio.h>
void mul(int *,int *);
void mul(int *a,int *b)
{
	printf("multiplication=%d",*a**b);
}
void main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	mul(&a,&b);
}
