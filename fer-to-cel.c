//farhenhite to celcius
#include<stdio.h>
void main()
{
	float f, c;
	printf("Enter the temprature in farhenhite:");
	scanf("%f", &f);
	
	c=(f-32)/1.8;
	printf("The temprature in celcius is:%f", c);
}
