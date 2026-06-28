//greater using switch case
#include<Stdio.h>
void main()
{
	float n1,n2;
	printf("Enter two number:");
	scanf("%f", &n1,&n2);
	switch(n1>n2)
	{
	case 0:
		printf("n1 is greater");
		break;
	case 1:
		printf("n2 is greater");
		break;
}
}
