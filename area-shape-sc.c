//to find area of shapes
#include<stdio.h>
void main()
{
	int choice;
	float area,side, r,l,b,h;
	printf("choices\n");
	printf("1.circle\n");
	printf("2.rectangle\n");
	printf("3.square\n");
	printf("4.triangle\n");
	printf("Enter the shape of your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the radius");
			scanf("%f",&r);
			area=3.14*r*r;
			break;
		case 2:
			printf("Enter length and breadth");
			scanf("%f%f",&l,&b);
			area=l*b;
			break;
		case 3:
			printf("Enter the side");
			scanf("%f",&side);
			area=side*side;
			break;
		case 4:
			printf("Enter the base and height");
			scanf("%f%f",&b,&h);
			area=0.5*b*h;
            break;
		default:
			printf("wrong choice");
	}
	printf("Area is%f",area);
}
