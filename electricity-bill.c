//to calculate electricity bill
#include<stdio.h>
void main()
{
	int un,bill;
	printf("enter the units consumed:");
	scanf("%d", &un);
	if(un<=100)
	bill=un*3;
	else if(un<=200)
	bill=un*5;
	else if(un<=300)
	bill=un*7;
	else
	bill=un*8;
	
	printf("the bill is:%d", bill);
}
