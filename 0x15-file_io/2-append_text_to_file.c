#include "main.h"
/**
 * append_text_to_file -a function that appends text at the end of a file.
 * @filename: filename.
 * @text_content: added content.
 * Return: -1 if the fails does not exist or if it fails.
 * 1 if the file exists.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int countl = 0, rwr, fn;

	if (filename == NULL)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);

	if (fn == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[countl])
		{
			countl++;
		}
		rwr = write(fn, text_content, countl);
		if (rwr == -1)
			return (-1);
	}

	close(fn);

	return (1);
}
