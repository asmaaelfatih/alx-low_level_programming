#include "main.h"

/**
* jack_bauer - Prints every minute of the day of Jack Bauer
*
* Return: Return void
*/

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
