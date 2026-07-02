//to check if triangle is valid
#include<stdio.h>
void main()
{
	float a,b,c,sum;
	printf("Enter the three angles of the triangle:");
	scanf("%f%f%f", &a,&b,&c);
	sum=a+b+c;
	if(sum==180)
	printf("The triangle is valid");
	else
	printf("The triangle is invalid");
}
