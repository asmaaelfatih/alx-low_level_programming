#include<stdio.h>

/**
* main --Entry point
*
* Description: programme that print  combinations of three digits
*
* Return: This return 0
*/

nt main(void)
{
	int a = 0;
	int b = a + 1;
	int c = b + 1;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
