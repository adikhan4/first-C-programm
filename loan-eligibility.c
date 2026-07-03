//to check if a given person is eigible for loan
#include<stdio.h>
void main()
{
	float sal, age, cs;
	printf("Enter the salary, cibil score and age of the person:");
	scanf("%f%f%f", &sal,&cs,&age);
	if(sal>=15000 && cs>=750 && age>=20)
	printf("The person is eligble for a loan");
	else
	printf("The number is not eligible for a loan");
}
