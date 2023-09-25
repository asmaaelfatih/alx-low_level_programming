#include<stdio.h>

/**
* main - Entry point
*
* Description: A programme that prints all possible comb of two two-digit
*
* Return: This return 0
*/

int main(void)
{
	int a = 0;
	int b = a + 1;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
