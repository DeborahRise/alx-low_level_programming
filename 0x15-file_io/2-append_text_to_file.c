#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of a file.
 * @filename: filename passed
 * @text_content: is the NULL terminated string to add
 * at the end of the file
 * Return:  on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int count;
	int read_text;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;
		read_text = write(file_desc, text_content, count);

		if (read_text == -1)
			return (-1);
	}

	close(file_desc);

	return (1);
}
