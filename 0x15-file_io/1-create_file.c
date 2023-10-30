#include "main.h"
/**
 * create_file -  a function that creates a file.
 * @filename: filename, to be created
 * @text_content: content writed in the file.
 * Return: -1 if it fails.1 if it success.
 */
int create_file(const char *filename, char *text_content)
{
	int fn, countl = 0, rwr;

	if (filename == NULL)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[countl])
	{
		countl++;
	}
	rwr = write(fn, text_content, countl);

	if (rwr == -1)
		return (-1);

	close(fn);

	return (1);
}
