//gross and net salary
#include<stdio.h>
void main()
{
	float gs,ns,bs,ta,da,pf;
	printf("Enter the base salary:");
	scanf("%f", &bs);
	
	ta=(10.0/100)*bs;
	da=(5.0/100)*bs;
	pf=(7.8/100)*bs;
	
	gs=bs+ta+da;
	ns=gs-pf;
	printf("The gross salary is:%f\n", gs);
	printf("The net salary is:%f\n", ns);
}
