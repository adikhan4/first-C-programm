//to check number of roots in a quadratic equation
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the values of quadratic equation:");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	printf("Two real different roots");
	else if(d==0)
	printf("The one real repeated root");
	else if(d<0)
	printf("imaginary root");
	else
	printf("wrong input");
}
