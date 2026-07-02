//to find maximum between 4 numbers
#include<stdio.h>
void main()
{
	float a,b,c,d;
	printf("Enter four number:");
	scanf("%f%f%f%f", &a,&b,&c,&d);
	if(a>c && a>b && a>d)
	printf("The number a is maximum");
	else if(b>a && b>c && b>d)
	printf("The number b is maximum");
	else if(c>a && c>b && c>d)
	printf("The number c is maximum");
	else
	printf("The number d is maximum");
}
