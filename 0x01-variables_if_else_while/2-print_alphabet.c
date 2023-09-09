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
	int a = 0;
int b = 0;

while (a < 10)
{
	while (b < 10)
	{
		putchar(a + '0');
		putchar(b + '0');
		if (a != 9 && b != 9)
		{
putchar(',');
			putchar(' ');
		}
a++;
		b++;
	}
}
putchar('\n');
return (0);
}
