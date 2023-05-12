#include <stdio.h>
#include "main.h"


/**
* main - A function that print the number of
* arguments passed to the program.
* @argc: The digit of argument.
* @argv: An array of argument.
* Return: Always 0 (Successfully)
*/
int main(int argc, char *argv[])

{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}

