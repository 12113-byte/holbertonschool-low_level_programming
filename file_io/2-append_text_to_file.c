#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: sring to be added at the end of the file
 * Return: 1 on success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byt4es_written;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		len = srlen(text_content);
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

