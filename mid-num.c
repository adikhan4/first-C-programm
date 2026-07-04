//to check middle number of a 3 digit number
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three values");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b && a<c) || (a<b && a>c))
	printf("The middle number is%d\t",a);
	else if((b>a && b<c) || (b<a && b>c))
	printf("The middle number is%d\t",b);
	else
	printf("The middle number is%d\t",c);
}
