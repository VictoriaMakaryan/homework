#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf(" \t Welcome! \n");
	printf("Please input the first number: \n");
	scanf("%i", &a);
	printf("Please input the second number: \n");
	scanf("%i", &b);
	printf("Please input the third number: \n");
	scanf("%i", &c);

	int greatest = a;

	if (b > greatest)
		greatest = b;
	if (c > greatest)
		greatest = c;

	if (a == b || a == c || b == c)
	{
		printf("The greatest number is %i \n", greatest);
	} else 
	{
		printf("None of three numbers are equal \n");
	}
	return 0;
}
