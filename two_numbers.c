#include <stdio.h> 

int main()
{
	int a = 0;
	int b = 0;
	printf("\t Welcome! \n");
	printf("Please input the first number: \n");
	scanf("%i", &a);
	printf("Please input the second number: \n");
	scanf("%i", &b);
	
	if (a > b)
	{
		printf("The biggest number is %d \n", a);
	} else if (a < b)
	{
		printf("The biggest number is %d \n", b);
	} else 
	{
		printf("The numbers are equal! \n");
	}
	return 0;
}
