//to check if given character is lower case vowel
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter an alphabet:");
	scanf("%c", &ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='I'||ch=='U' && ch>='a' && ch<='z')
	printf("The alphabet is a lowercase vowel");
	else
	printf("The alphabet is not a lower case vowel");
}
