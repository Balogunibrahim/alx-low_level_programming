#include "main.h"
/**
 * append_text_to_file- appends text to a file
 * @filename: a pointer to the name of the file.
 * @text_content: the string to add to the end of the file.
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(fd, text_content, length);

	if (fd == -1 || bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}
