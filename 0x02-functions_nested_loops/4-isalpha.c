#include "main.h"

/**
* _isalpha - Check for alphabetic character
*
* @c: Char to be check
*
* Return: Return 1 if alphabetic else retun 0
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
