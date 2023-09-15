#include <stdio.h>
#include <math.h>

/**
* main - Entry point
*
* Description:  Prints the largest prime factor of the number 612852475143
*
* Return: Always return 0
*/

int main(void)
{
	unsigned long int n  = 612852475143;
	unsigned long int i;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
