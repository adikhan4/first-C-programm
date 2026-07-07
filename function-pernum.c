//making function to check if a number is a perfect number
#include<stdio.h>
int prenum(int);
int pernum(int n)
{
	int i,a;
	for(i=1;i<n;i++)
    {
    	if(n%i==0)
    	a=a+i;
	}
	if(a==n)
	return 1;
	else
	return 0;
}
void main()
{
	int n,res;
	printf("enter a number to be checked");
	scanf("%d",&n);
	res=pernum(n);
	if(res==1)
	printf("No is perfect number");
	else
	printf("not a perfect number");
}
