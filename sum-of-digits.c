//sum of first and last digit of a 4digit no.
#include<stdio.h>
void main()
{
	int n,d1,d2,sum;
	printf("Enter a 4 digit number:");
	scanf("%d", &n);
	d1=n/1000;
	d2=n%10;
	sum=d1+d2;
	printf("The sum of first and last digit of given number is:%d", sum);
}
