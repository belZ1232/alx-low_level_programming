#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Thae func that returns
* sum of all its params.
* @n: params passed to the func.
* @...: Var num of params to calc the sum of.
* Return: n == 0 - 0.
* Otherwise - sum of all params.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int p, sum = 0;
va_start(ap, n);
for (p = 0; p < n; p++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
