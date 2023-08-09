#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ci;
	int bee, bas;

	if (!b)
		return (0);

	ci = 0;

	for (bee = 0; b[bee] != '\0'; bee++)
		;

	for (bee--, bas = 1; bee >= 0; bee--, bas *= 2)
	{
		if (b[bee] != '0' && b[bee] != '1')
		{
			return (0);
		}

		if (b[bee] & 1)
		{
			ci += bas;
		}
	}

	return (ci);
}

