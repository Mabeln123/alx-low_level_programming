#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function to write a character to the standard output.
 * @c: Character to be printed.
 * Description: Function that converts a binary number to an unsigned int.
 * Return: On success 1, On error -1 and errno is set correctly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
