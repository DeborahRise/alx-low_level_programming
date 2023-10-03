#include "main.h"

#define _size 1024

/**
 *
 */

int main(int argc, char *argv[])
{
	int file_desc_from, file_desc_to;
	char store[_size];
	char *file_from, *file_to;
	ssize_t read_txt = 1024, write_txt = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	}
	file_from = argv[1];
	file_to = argv[2];

	file_desc_from = open(file_from, O_RDONLY);
	if (file_desc_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file_desc_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY);
	if (file_desc_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(file_desc_from);
		exit(99);
	}

	while ((read_txt = read(file_desc_from, store, _size)) > 0)
	{
		if (read_txt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			close(file_desc_from);
			close(file_desc_to);
			exit(98);
		}
		write_txt = write(file_desc_to, store, read_txt);
		if (write_txt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(file_desc_from);
			close(file_desc_to);
			exit(99);
		}
	}
	if (close(file_desc_from) == -1 || close(file_desc_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d %d\n", file_desc_from, file_desc_to);
		exit(100);
	}

	return (0);

}
