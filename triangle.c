#include<stdio.h>
void main()
{
	float s1,s2,s3;
	printf("enter the length of three sides of triangle:");
	scanf("%f%f%f", &s1,&s2,&s3);
	if(s1==s2==s3)
	printf("the triangle is eqilateral");
	if(s1==s2)
	printf("the triangle is isosceles");
	else
	printf("the triangle is scalen");
}
