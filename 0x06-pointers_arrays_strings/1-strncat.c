#include"main.h"

/**
* _strncat -  Appends the src string to dest string using  n bytes from src
*
* @src: Source pointer
*
* @dest: Destination
*
* @n: Input parameter
*
* Return: Return dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
