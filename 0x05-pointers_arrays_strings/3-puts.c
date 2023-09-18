#include "main.h"

/**
 * _puts - print a string, followed by a new line  to stdout
 *
 * @str: sting parameter to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
