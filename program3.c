//program to convert km to mm
#include<stdio.h>
void main()
{
	float km,mm;
	printf("Enter the distance in km:");
	scanf("%f",&km);
	
	mm=km*1000000;
	printf("The distance in mm is:%f", mm);
}
