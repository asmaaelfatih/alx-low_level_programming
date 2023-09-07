#include<stdio.h>
/**
 * main - Entry point
 *
 * Desceipion: A C program that prints the size of various types with sizeof.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of pointer: %zu bytes\n", sizeof(void*));
	return (0);
}
