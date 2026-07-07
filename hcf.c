//to print hcf
#include<stdio.h>
void main()
{
	int i,n1,n2,min,hcf;
	printf("Enter the two number:");
	scanf("%d%d",&n1,&n2);
	min=(n1<n2)?n1:n2;
	for(i=1;i<=min;i++)
	{
		if(n1%i==0 && n2%i==0)
		hcf=i;
	}
	printf("HCF:%d",hcf);
}
