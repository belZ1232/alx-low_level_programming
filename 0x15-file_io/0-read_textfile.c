#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- file print to STDOUT.
 * @filename: read text file
 * @letters: number of letters
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bud;
	ssize_t ar;
	ssize_t a;
	ssize_t r;

	ar = open(filename, O_RDONLY);
	if (ar == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(ar, bud, letters);
	a = write(STDOUT_FILENO, bud, r);

	free(bud);
	close(ar);
	return (a);
}

