//perimeter of triangle
#include<stdio.h>
void main()
{
	float a,b,c, per;
	printf("Enter the value of 3 sides of a triangle:");
	scanf("%f%f%f", &a,&b,&c);
	
	per=a+b+c;
	printf("The perimeter of triangle is:%f", per);
}
