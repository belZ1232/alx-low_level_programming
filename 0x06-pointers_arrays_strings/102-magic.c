#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* Writes your line of code here...
* Remember:
* - Am  not allowed to use a
* - Am not allowed to modify p
* - only one statement
* - Am not allowed to code anything else than this line of code
*/
p[5] = 98;
/*
* Assign the value 98 to the element with index 5
for (int i = 0; i < 10; i++)
*/
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

