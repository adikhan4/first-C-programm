//program to do basic calculation
#include<stdio.h>
void main()
{
	float a,b,ans;
	char op;
	printf("Enter the two values and then the:");
	scanf("%f%f",&a,&b);
	printf("Enter the operator:");
	scanf(" %c", &op);
	if(op=='+')
	ans=a+b;
	else if(op=='-')
	ans=a-b;
	else if(op=='*')
	ans=a*b;
	else if(op=='/')
	ans=a/b;
	else
	printf("wrong input");
	printf("The answer is:%f",ans);
}
