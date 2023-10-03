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
	{
		int file;
		int final_out;
		int x;

		file = open(filename, O_RDWR | O_APPEND);
		if (filename == NULL)
			return (-1);
		if (file == -1)
			return (-1);
		if (text_content == NULL)
			return (1);
		while (*(text_content + x) != '\0')
			x++;
		final_out = write(file, text_content, x);
		if (final_out == -1)
			return (-1);
		return (1);
	}
}
