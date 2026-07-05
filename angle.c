//to check angle
#include<stdio.h>
void main()
{
	int angle;
	printf("Enter the angle:");
	scanf("%d",&angle);
	if(angle>0 && angle<90)
	printf("acute angle");
	else if(angle==90)
	printf("right angle");
	else if(angle>90 && angle<180)
	printf("obtuse angle");
	else if(angle==180)
	printf("straight angle");
	else
	printf("invalid angle");
}
