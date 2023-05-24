#include <stdio.h>
#include <stdlib.h>
/**
* main - function that prints
* its own operation codes.
* @argc: num of arg
* @argv: an array of arg
* Return: 0 (Successful)
*/
int main(int argc, char *argv[])
{
int bytes, q;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)main;
for (q = 0; q < bytes; q++)
{
if (q == bytes - 1)
{
printf("%02hhx\n", arr[q]);
break;
}
printf("%02hhx ", arr[q]);
}
return (0);
}
