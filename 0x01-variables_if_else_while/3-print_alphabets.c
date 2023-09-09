#include <stdio.h>

/**
* main - Entry point
*
* Description: A C programme that print alphabet in lower and upper case
*
* Return: This return 0
*/

int main(void)
{
	char  a;
	char  A;
		a = 'a';
	A = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}

