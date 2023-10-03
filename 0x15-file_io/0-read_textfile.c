#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints to POSIX output.
 * @filename: filename passed
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t read_txt, write_txt;
	char *store;

	if (!filename)
		return (0);

	store = malloc(sizeof(char) * letters);
	if (!store)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		free(store);
		return (0);
	}

	read_txt = read(file_desc, store, letters);
	if (read_txt == -1)
	{
		free(store);
		close(file_desc);
		return (0);
	}
	close(file_desc);

	write_txt = write(STDOUT_FILENO, store, read_txt);
		if (write_txt == -1)
		{
			free(store);
			return (0);
		}
	if (write_txt != read_txt)
	{
		return (0);
	}
	return (read_txt);
}
