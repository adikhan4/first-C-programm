//basic calculation using switch case
#include<Stdio.h>
void main()
{
	char choice;
	float a,b;
	printf("Enter the operation +,-,*,/:");
	scanf("%c", &choice);
	switch(choice){
	case '+':
		printf("Enter two number:");
		scanf("%f%f",&a,&b);
		printf("sum=%f\n",a+b);
	    
		break;
	case '-':
		printf("Enter two number:");
		scanf("%f%f",&a,&b);
		printf("sum=%f\n",a-b);
		break;
	case '*':
		printf("Enter two number:");
		scanf("%f%f",&a,&b);
		printf("sum=%f\n",a*b);
		break;
	case '/':
		printf("Enter two number:");
		scanf("%f%f",&a,&b);
		printf("sum=%f\n",a/b);
		break;
}
	
}
