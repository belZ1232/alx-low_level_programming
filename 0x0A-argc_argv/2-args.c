#include <stdio.h>
#include "main.h"


/**
* main - The program that prints
* all arguments it receives.
* @argc: The number of arguments.
* @argv: An array of an arguments.
* Return: Always 0 (Successfully)
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
