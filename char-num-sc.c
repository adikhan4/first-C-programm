//to check if given input is character,number or special character
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c", &ch);
	if(ch>='A' && ch<='z' || ch>='a' && ch<='z')
	printf("alphabet");
	else if(ch>='0' && ch<='9')
	printf("number");
	else
	printf("special character");
}
