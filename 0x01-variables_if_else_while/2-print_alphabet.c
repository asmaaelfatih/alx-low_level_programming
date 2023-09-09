#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return:  0 (success)
 */

int main(void)
{
	char  a;
	a = 'a';
		while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
