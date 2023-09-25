#include"main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: ointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (haystack[itr] != '\0')
	{
		jtr = 0;
		while (needle[jtr] != '\0')
		{
			if (needle[jtr] == haystack[itr])
			{
				p = &haystack[itr];
				return (p);
			}
			jtr++;
		}
		itr++
	}
	return (0)
}

