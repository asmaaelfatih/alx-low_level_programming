#include<stdio.h>

/**
* main - Entry point
*
* Description: A programme that print combinations of numbers
*
* Return: This return 0
*/

int main(void)
{
	int n = 0;	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
