#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int bee;
	char *zee;

	bee = 1;
	zee = (char *) &bee;

	return ((int)*zee);
}

