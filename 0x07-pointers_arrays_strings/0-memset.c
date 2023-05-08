#include "main.h"
/**
 * _memset - Block of memory should be filled with a specific value
 *
 * @s: fill the starting address of memory 
 * @b: the wanted value
 * @n: Number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;
        for (; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return (s);
}

