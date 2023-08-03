#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: Number to be searched.
 * @index: Bit index
 * Description: The function that returns the value of a bit at a given index.
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
