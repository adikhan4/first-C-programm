//to check vowel or consonant
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter an alphabet:");
	scanf("%c", &ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='I'||ch=='U')
	printf("The alphabet is a vowel");
	else
	printf("The alphabet is a consonant");
}
