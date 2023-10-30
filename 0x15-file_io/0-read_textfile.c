#include "main.h"
/**
 * read_textfile -  a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: If fails, returns 0. numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	char *buffer;
	ssize_t hp1, hrd;

	buffer = (char *)malloc(sizeof(char) * (letters)); /* size of buffer */
	if (filename == NULL)
		return (0);

	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	if (buffer == NULL)
		return (0);

	hrd = read(fn, buffer, letters);
	hp1 = write(STDOUT_FILENO, buffer, hrd);

	close(fn);

	free(buffer);

	return (hp1);
}
