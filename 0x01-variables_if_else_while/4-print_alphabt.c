#include<stdio.h>

/**
* main - Entry point
*
* Description: A C programme that print alphabet in exept e and q
*
* Return: This return 0
*/

int main(void)
{
	char  a;
	 a = 'a';
	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
