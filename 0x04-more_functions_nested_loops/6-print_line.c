#include "main.h"

/**
* print_line - Draws a straight line in the terminal
*
* @n: Is the number of times the character _ should be printed
*
* Return: Returns void
*/

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
