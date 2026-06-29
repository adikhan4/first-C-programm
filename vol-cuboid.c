//vol of cuboid
#include<stdio.h>
void main()
{
	float l, b, h, vol;
	printf("Enter the lenght, breadth, height of cuboid:");
	scanf("%f%f%f", &l,&b,&h);
	
	vol=l*b*h;
	printf("The volume of cuboid is:%f", vol);
}
