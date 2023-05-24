#include "3-calc.h"
int op_div(int a, int b);
int op_mod(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_add(int a, int b);
/**
* op_add - answer of sum of two digits.
* @a: 1st digit.
* @b: 2nd digit.
*
* Return: sum of m and n.
*/
int op_add(int m, int n)
{
return (m + n);
}
/**
* op_sub - difference of two digits.
* @a: 1st digit.
* @b: 2nd digit.
* Return: difference of m and n.
*/
int op_sub(int m, int n)
{
return (m - n);
}
/**
* op_mul - Results of two digits.
* @a: 1st digit.
* @b: 2nd digit.
* Return: results of m and n.
*/
int op_mul(int m, int n)
{
return (m * n);
}
/**
* op_div - division of two digits.
* @a: 1st digit.
* @b: 2nd digit.
* Return: answer of m and n.
*/
int op_div(int m, int n)
{
return (m / n);
}
/**
* op_mod - Returns division remainder of two numbers.
* @a: 1st digit.
* @b: 2nd digit.
* Return: the division remainder of m by n.
*/
int op_mod(int m, int n)
{
return (m % n);
}
