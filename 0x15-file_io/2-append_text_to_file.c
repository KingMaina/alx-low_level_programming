#include "main.h"

/**
* _strlen - Gets the length of a string
* @str: poiner to a string
*
* Return: The length of the string
*/
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
* append_text_to_file - appends text at the end of a file
* @filename: A pointer to the file name
* @text_content: content to append to a file
*
* Return: 1 on success, -1 on error, 1 if the file exists
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		bytes_written = write(fd, text_content, _strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}

