#include<stdio.h>

/**
* main - Entry point
*
* Description: A programme that print number of single digit
*
* Return: This return 0
*/

int main(void)
{
	int i = 0;	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
