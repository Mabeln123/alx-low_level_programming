#include "main.h"

/**
 * get_endianness - The function checks the endianness.
 * Description: A function that checks the endianness.
 * Return: Returns 0 for big and 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
