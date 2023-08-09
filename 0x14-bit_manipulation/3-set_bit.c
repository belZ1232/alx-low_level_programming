#include "main.h"

/**
 * set_bit - value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bee;

	if (ind > 63)
		return (-1);

	bee = 1 << ind;
	*n = (*n | bee);

	return (1);
}

