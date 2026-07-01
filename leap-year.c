//to check leap year
#include<stdio.h>
void main()
{
	int yr;
	printf("Enter a year:");
	scanf("%d", &yr);
	if(yr%4==0 && yr%100!=02)
	printf("The year is a leap year");
	else 
	printf("The year is not leap year");
}
