#include "main.h"

/**
 * flip_bits - The function counts number of bits to flip and change
 * from one number to another.
 * @n: The very first number.
 * @m: Is the second number.
 * Description: Function that returns the number of bits you would need to flip
 * Return: Returns number of changed bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
