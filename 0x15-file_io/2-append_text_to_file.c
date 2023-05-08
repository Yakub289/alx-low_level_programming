#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

/**
 * append_text_to_file - A function that append text to the end of a file.
 * @filename:file permission is granted and file is accessible.
 * @text_content:terminated string to add at the end of the file.
 * Return: Always 1 (success), or else
 * -1 if file does not exist (do not create on failure),
 *  -1 if filename is NULL,
 *  -1 if text_content is NULL (do not add anything to file).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	w = write(x, text_content, len);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
