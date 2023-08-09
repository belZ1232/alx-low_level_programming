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
	char *buff;

	if (!filename)
		return (0);

	ax = open(filename, O_RDONLY);

	if (ax == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	bee = read(ax, buff, letters);
	pee = write(STDOUT_FILENO, buff, bee);

	close(ax);

	free(buff);

	return (pee);
}

