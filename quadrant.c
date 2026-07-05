//to check quadrant
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the cordinate:");
	scanf("%d%d",&x,&y);
	if(x>0 &&y>0)
	printf("1st quadrant");
	else if(x<0 && y>0)
	printf("2nd quadrant");
	else if(x>0 && y<0)
	printf("3rd quadrant");
	else if(x<0 && y<0)
	printf("4th quadrant");
	else if(x==0 && y==0)
	printf("origin");
	else if(x==0)
	printf("y axis");
	else if(y==0)
	printf("x axis");	
}
