#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - Prints strs
* followed by a new line.
* @separator: The str to be printed between strs.
* @n: num of strs passed to the funct.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;
va_start(strings, n);
for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
