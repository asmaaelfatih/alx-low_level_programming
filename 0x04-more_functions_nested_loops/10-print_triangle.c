#include "main.h"

/**
* print_triangle - Prints a triangle, followed by a new line
*
* @size: Is the size of the triangle
*
* Return: return void
*/

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

