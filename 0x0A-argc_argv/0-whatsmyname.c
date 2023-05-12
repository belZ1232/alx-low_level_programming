#include <stdio.h>

#include "main.h"


/**
* main - A function that prints
* the name of the program.
* @argc: the digits of arguments.
* @argv: an array of arguments.
* Return: Always 0 (Successful)
*/
int main(int argc __attribute__((unused)), char *argv[])

{
printf("%s\n", *argv);
return (0);
}

