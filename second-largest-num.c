//to find second largest number
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter three number:");
	scanf("%f%f%f", &a,&b,&c);
	if(a>c && a<b)
	printf("The number a is second largest");
	else if(b>a && b<c)
	printf("The number b is second largest");
	else
	printf("The number c is second largest");

