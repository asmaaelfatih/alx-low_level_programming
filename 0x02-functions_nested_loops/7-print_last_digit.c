#include "main.h"

/**
* print_last_digit -  Print last digit of a number
*
* @i: Number to print last digit for
*
* Return: Return digit value
*/

int print_last_digit(int i)
{
	int d;

	d = i % 10;

	if (i > 0)
	{
		_putchar(d + '0');
		return (d);
	}
	else
	{
		_putchar (-1 * d + '0');
		return (-d);
	}
}
