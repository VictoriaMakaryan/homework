//solve the (x * y) + (21 * x / y) - 200) equation

#include <stdio.h>

int main()
{	
	int x = 0;
	int y = 0;
	printf("Welcome! \n");
	printf("Please input the first number: \n");
	scanf("%i", &x);
	printf("Please input the second number: \n");
	scanf("%i", &y);

	printf("Result = %d \n", (x * y) + (21 * x / y) - 200);

	return 0;
}
