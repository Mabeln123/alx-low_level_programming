#include "main.h"

/**
 * clear_bit - The function sets the value of a given bit to 0
 * @n: Points the number to be changed.
 * @index: Bit to clear index.
 * Description: Function that sets the value of a bit to 0 at a given index
 * Return: Returns 1 for success and -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
