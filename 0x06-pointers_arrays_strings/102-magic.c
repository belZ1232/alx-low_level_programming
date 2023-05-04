#include <stdio.h>

int _putchar(char);
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* line of code here...
* Remember:
* - am not allowed to use a,
* - am not allowed to modify p,
* - only one statement,
* - am not allowed to code anything else than this line of code.
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);

}


