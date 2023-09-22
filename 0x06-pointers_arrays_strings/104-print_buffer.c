#include"main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 *
 * @b: buffer to be printed
 *
 * @size: Size of buffer
 *
 * Return: Return void
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", (unsigned char)b[j]);

				if (j + 1 < size)
				{
					printf("%02x ", (unsigned char)b[j + 1]);
				}
				else
				{
					printf("   ");
				}
			}
			else
			{
				printf("     ");
			}
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (isprint(b[j]))
			{
				printf("%c", b[j]);
			}
			else
			{
				printf(".");
			}}
		printf("\n");
	}}
