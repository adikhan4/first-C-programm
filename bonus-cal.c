//to calculate bonus
#include<stdio.h>
void main()
{
	int sal,bonus;
	printf("enter the salary:");
	scanf("%d", &sal);
	if(sal<=10000)
	bonus=sal*5/100;
	else if(sal<=20000)
	bonus=sal*10/100;
	else
	bonus=sal*15/100;
	
	printf("the bonus is:%d", bonus);
}
