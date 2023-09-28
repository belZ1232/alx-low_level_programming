#include "main.h"

/**
 * string_length - function retruns the length of a string
 *
 * Description: function returns the length of a string
 *
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: size of string
 */
int string_length(const char *b)
{
	int ind, strg_len;

	strg_len = 0;
	if (b == 0)
		return (strg_len);
	for (ind = 0; b[ind]; ind++)
		strg_len++;
	return (strg_len);
}

/**
 * power - function that returns the exponential power
 *
 * Description: function that returns the exponential power
 *
 * @base: base integer
 * @exponent: exponential integer
 *
 * Return: unsigned integer
 */
unsigned int power(int base, int exponent)
{
	unsigned int tot;

	tot = 1;
	if (base < 0)
		return (0);
	if (exponent == 0)
		return (tot);
	while (exponent > 0)
	{
		tot *= base;
		exponent--;
	}
	return (tot);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * Description: function that converts a binary number to an unsigned int
 *
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: unsigned number or 0 is not valid
 */
unsigned int binary_to_uint(const char *b)
{
	int bi_stng_pos, bi_stng_len;
	unsigned int tot;

	tot = 0;
	bi_stng_len = strg_len(b) - 1;

	if (b == 0)
		return (0);

	for (bi_stng_pos = bi_stng_len;
			bi_stng_pos >= 0;
			bi_stng_pos--)
	{
		if (b[bi_stng_pos] == '1')
		{
			tot += power(2, (bi_stng_len - bi_stng_pos));
		}
		else if (b[bi_stng_pos] != '0'
				&& b[bi_stng_pos] != '1')
		{
			return (0);
		}
	}
	return (tot);
}
