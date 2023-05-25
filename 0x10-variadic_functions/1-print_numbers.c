#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - func that prints
*  num, followed by a new line.
* @separator: strng to be printed betwn nums.
* @n: num of ints passed to the func.
* @...: print var num of nums.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list lens;
unsigned int index;
va_start(lens, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(lens, int));
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(lens);
}
