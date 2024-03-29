#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

/**
 * create_file - A function that create a file and asign permission.
 * @filename: Asign permission and turnicate.
 * @text_content: A pointer to a string to write to the file.
 * Return: Always 1 (success), or else
 * -1 on failure when creation and write is not allowed,
 *  -1 if filename is NULL,
 *  -1 if text_content is NULL as empty file.
 */

int create_file(const char *filename, char *text_content)
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

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(x, text_content, len);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
