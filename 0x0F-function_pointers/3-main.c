#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - Answer of a simple operations.
* @argc: num of arg taken to the prog.
* @argv: Array of ptr to the arg.
* Return: 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int len1, len2;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
len1 = atoi(argv[1]);
op = argv[2];
len2 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && len2 == 0) ||
(*op == '%' && len2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(len1, len2));
return (0);
}
