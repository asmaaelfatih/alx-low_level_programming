#include<stdio.h>

/**
* main - Entry point
*
* Description: A programme that print alphabet in reverse
*
* Return: This return 0
*/

int main(void)
{
	char z = 'z';	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
