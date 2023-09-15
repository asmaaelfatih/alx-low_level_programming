#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
*
* @n: Is the number of times the character \ should be printed
*
* Return: This return void
*/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
