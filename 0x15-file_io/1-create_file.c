#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, write_txt, len;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		write_txt = write(file_desc, text_content, len);


		if (write_txt == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);

}


