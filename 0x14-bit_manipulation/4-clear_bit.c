#include "main.h"

/**
 * clear_bit - Function sets the value of bit to 0
 * @n: The pointer to the number to changed
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
