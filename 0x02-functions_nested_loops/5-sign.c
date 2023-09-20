#include "main.h"

/**
* print_sign - print number sign
*
* @n: Number to be checked
*
* Return: Positive return 1,zero return 0 and negative return -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
