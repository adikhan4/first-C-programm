//to check character is upper case or lower case
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	if(ch>='A' && ch<='Z')
	printf("The character is uppercase");
	else if(ch>='a' && ch<='z')
	printf("The characer is lowercase");
}
