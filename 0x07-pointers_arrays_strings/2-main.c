#include "main.h"
#include <stdio.h>
/**
* main - Check a code
*
* Return: Always 0(Successful).
*/
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
