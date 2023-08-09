#include "main.h"
/**
* binary_to_unity - change binary to unsigned int.
* @b: binary
* of 0 and 1 char
* Return: 0 if thers is 1 or more characters
* in the string
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
if (b == NULL)
return (0);
for (int p = 0; b[p] != '\0'; p++)
{
if (b[p] == '0')
{
res = res << 1;
}
else if (b[p] == '1')
{
res = (res << 1) | 1;
}
else
{
return (0);
}
}
return (res);
}
/**
 * main - Entry point
 * Return: 0 (successful)
int main(void)
{
const char *binary = "101000";
unsigned int decimal = binary_to_uint(binary);
printf("Binary: %s\nDecimal: %u\n", binary, decimal);
return (0);
}
