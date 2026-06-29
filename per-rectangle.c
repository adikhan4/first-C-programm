//perimeter of rectangle
#include<stdio.h>
void main()
{
	float l, w, per;
	printf("Enter the lenght and width of rectangle:");
	scanf("%f%f", &l,&w);
	
	per=2*(l+w);
	printf("The perimeter of rectangle is:%f", per);
}
