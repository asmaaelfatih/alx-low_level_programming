#include "main.h"

#include "main.h"

/**
* print_alphabet_x10 - Print alphabet X10 times
*
* Return: Void
*/

void print_alphabet_x10(void)
{
	char l = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		l = 'a';
		_putchar('\n');
	}
}
