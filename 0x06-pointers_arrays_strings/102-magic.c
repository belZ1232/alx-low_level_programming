#include "main.h"
#include <stdio.h>
int _putchar(char);
{
int n;
int a[2];
int *p;

a[2] = 1024;
p = &n;
/*
* line of code here...
* Remember:
* - am not allowed to use a
* - am not allowed to modify p
* - am not allowed to code anything else than this line of code.
*/
{
*(p + 2) = 98;
*std::cout << "a[2] = " << *(p + 2) << std::endl;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
