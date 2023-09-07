#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
syscall(SYS_write, 2, message, 42);
return (1);
}
