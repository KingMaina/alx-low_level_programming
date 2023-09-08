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
* create_file - creates a text file
* @filename: A pointer to the file name string
* @text_content: content to initialize the created file with
*
* Return: 1 on success, -1 on error
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content)
		bytes_written = write(fd, text_content, _strlen(text_content));
	else
		bytes_written = write(fd, "", 0);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}

