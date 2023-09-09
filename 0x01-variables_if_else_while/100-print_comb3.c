#include <stdio.h>

/**
* main - Entry point
*
* Description: A C programme that print alphabet in lowercase
*
* Return: This return 0
*/

int main(void)
{
	int i, j;	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
