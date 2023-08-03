#include "main.h"

/**
 * set_bit - The function sets the value of a bit to 1 at a given index.
 * @n: Points to number to be changed.
 * @index: Set bit index to 1
 * Description: Function that sets the value of a bit to 1 at a given index
 * Return: 1 for succes and -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
