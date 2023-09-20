#include<stdio.h>

/**
* main - Entry point
*
* Description: Programme prints number less than 1024 mult by 3 or 5
*
* Return: This return 0
*/

int main(void)
{
	int l = 1024;
	int s = 0;
	int i;

	for (i = 1; i < l; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
		}
	}
	printf("%d\n", s);
	return (0);
}
