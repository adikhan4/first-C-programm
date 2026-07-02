//to check smallest number between 3 numbers
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter three number:");
	scanf("%f%f%f", &a,&b,&c);
	if(a<c && a<b)
	printf("The number a is smallest");
	else if(b<a && b<c)
	printf("The number b is smallest");
	else
	printf("The number c is smallest");
}
