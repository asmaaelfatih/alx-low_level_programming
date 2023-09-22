#include"main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] - 32;
			}
			else
			{
				for (j = 0; j < 12; j++)
				{
					if (a[j] == s[i - 1])
					{
						s[i] = s[i] - 32;
					}
				}
			}
		}
		i++;
	}
	return (s);
}