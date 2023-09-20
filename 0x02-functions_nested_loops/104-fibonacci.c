#include<stdio.h>

/**
* main - Entry point
*
* Description: Program that finds and prints the first 98 Fibonacci numbers
*
* Return: This return 0
*/

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
