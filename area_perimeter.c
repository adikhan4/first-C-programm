//programm to find area and perimeter of square 
#include<stdio.h>
void main()
{
	float a,ar,per;
	printf("Enter the value of side of a square:");
	scanf("%f", &a);
	
	per=4*a;
	ar=a*a;
	printf("The area of the square id:%f\n", ar);
	printf("The perimeter of square is:%f\n", per);
}
