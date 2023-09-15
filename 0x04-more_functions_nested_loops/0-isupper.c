#include "main.h"

/**
* _isupper - Checks for uppercase character
*
* @c: The character to be checked
*
* Return: Return 1 if upper else return 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
