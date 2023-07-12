#include <stdio.h>

int main()
{
	char ch;
	printf(" \t Welcome! \n");
	printf("Please input a character (a-z) \n");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Your character is a vowel! \n");
			break;
		default:
			printf("Your character is a consonant! \n");
			break;
	}

	return 0;
}
