//To find vol of sphere
#include<stdio.h>
void main()
{
	float r, vol;
	printf("Enter the radius of cuboid:");
	scanf("%f", &r);
	
	vol=(4/3)*3.14*r*r*r;
	printf("The volume of sphere is:%f", vol);
}
