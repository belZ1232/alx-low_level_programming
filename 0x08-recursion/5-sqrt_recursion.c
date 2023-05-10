#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int i);
/**
* _sqrt_recursion -The function that  returns
*  the natural square root of a number.
*
* @n: Calculate the square root of
*
* Return: The resulting square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
* actual_sqrt_recursion - A recurses to find the natural
* square root of a number.
*
* @n: Calculations of the sqaure root of
* @i: an iterator
*
* Return: the resulting square root
*/
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));

}
