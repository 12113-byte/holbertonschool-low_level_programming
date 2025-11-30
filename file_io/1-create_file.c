#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failue
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_writen;
	size_t len = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written != (ssize_t)len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

