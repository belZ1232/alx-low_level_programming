#include "main.h"

/**
 * get_bit - returns the value
 * of a bit at a given index.
 * @n: unsigned long int input.
 * @index: the bit index.
 * Return: the bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int pee;

	if (n == 0 && index < 64)
		return (0);

	for (pee = 0; pee <= 63; n >>= 1, pee++)
	{
		if (index == pee)
		{
			return (n & 1);
		}
	}

	return (-1);
}

