#include"main.h"

/**
* reverse_array - Reverse the content of an array of integers
*
* @a: Array
*
* @n: Number of elements of the array
*
* Return: Return void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int t;

	while (i < j)
	{
		t  = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
