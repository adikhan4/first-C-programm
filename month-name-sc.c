//to check month name using switch case
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the month number");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("month name:january");
			break;
		case 2:
			printf("month name:feburary");
			break;
		case 3:
			printf("month name:mar");
			break;
		case 4:
			printf("month name:april");
			break;
		case 5:
			printf("month name:may");
			break;
		case 6:
			printf("month name:june");
			break;
		case 7:
			printf("month name:july");
			break;
		case 8:
			printf("month name:agust");
			break;
		case 9:
			printf("month name:september");
			break;
		case 10:
			printf("month name:october");
			break;
		case 11:
			printf("month name:november");
			break;
		case 12:
			printf("month name:december");
			break;
		default:
			printf("wrong month number");
	}
}
