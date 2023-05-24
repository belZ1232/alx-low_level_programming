#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - function to perform
* an operation asked by the user.
* @s: an operator passed as an argument.
* @Return: pointer of a function corresponding
* to an operator given as a parameter.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = 
{
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int i = 0;
for (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].i);
}
