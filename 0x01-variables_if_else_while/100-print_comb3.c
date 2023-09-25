#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all possible different combinations of two digits
*
* Return: This return 0
*/

int main(void)
{
	int a = 0;
	int b = a + 1;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
