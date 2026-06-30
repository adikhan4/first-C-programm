//celcius to farhenhite
#include<stdio.h>
void main()
{
	float f, c;
	printf("Enter the teprature in celcius:");
	scanf("%f", &c);
	
	f=(c*1.8)+32;
	printf("The temprature in farhenhite is:%f", f);
}
