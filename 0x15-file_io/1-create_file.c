#include "main.h"
/**
 * create_file- Creates a file.
 * @filename: a pointer to the name of the file to be created
 * @text_content: a pointer to a string to write to the file.
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(fd, text_content, length);

	if (fd == -1 || bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
