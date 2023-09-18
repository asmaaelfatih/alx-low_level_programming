#include "main.h"

/**
 * swap_int -swap the value of two integers using two input parameters
 *
 * @a: int parameter 1
 * @b: int parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
