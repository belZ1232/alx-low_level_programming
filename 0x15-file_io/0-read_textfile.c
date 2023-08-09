#include "main.h"

/**
* read_textfile - reads a text file
* and prints the letters
* @filename: filename.
* @letters: numbers of letters printed.
*
* Return: numbers of letters printed. It fails, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int ax;
ssize_t bee, pee;
char *buf;

if (!filename)
return (0);

ax = open(filename, O_RDONLY);

if (ax == -1)
return (0);

buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);

bee = read(ax, buf, letters);
pee = write(STDOUT_FILENO, buf, bee);

close(ax);

free(buf);

return (pee);
}
/**
* main - Entry point
* Return: 0(successful)
*/
int main(void)
{
const char *filename = "example.txt";
size_t letters = 110;

ssize_t result = read_textfile(filename, letters);
if (result == 0)
{
printf("Failed to read the file.\n");
return (1);
}

printf("Successfully read and printed %zd letters from the file.\n", result);
return (0);

}
