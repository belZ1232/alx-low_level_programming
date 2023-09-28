#include "main.h"

/**
 * flip_bits - number of bits to change
 * to get from one number to anoter
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int mee, zee = 0;
	unsigned long int cure;
	unsigned long int exe = n ^ m;

	for (mee = 63; mee >= 0; mee--)
	{
		cure = exe >> mee;
		if (cure & 1)
			zee++;
	}

	return (zee);
}

