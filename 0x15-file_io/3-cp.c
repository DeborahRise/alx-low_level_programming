#include "main.h"

#define _SIZE 1024
/**
 * help_close - function that helps close files
 * @file_desc_from: the variable to open file_from
 * @file_desc_to: the variable to open file_to
 */
void help_close(int file_desc_from, int file_desc_to)
{
	if (close(file_desc_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc_to);
		exit(100); }
	if (close(file_desc_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc_from);
		exit(100); }
}

/**
 * main - copies file_from  to another file_to
 * @argc: number of files passed
 * @argv: the files passed
 * Return:  exit  97, 98, 99, 100 if error or 0 if success
 */

int main(int argc, char *argv[])
{
	int file_desc_from, file_desc_to;
	char store[_SIZE];
	char *file_from, *file_to;
	ssize_t read_txt = 1024, write_txt = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_from = argv[1];
	file_to = argv[2];
	file_desc_from = open(file_from, O_RDONLY);
	if (file_desc_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); }
	file_desc_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (file_desc_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99); }
	while (read_txt == _SIZE)
	{
		read_txt = read(file_desc_from, store, _SIZE);
		if (read_txt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98); }
		write_txt = write(file_desc_to, store, read_txt);
		if (write_txt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99); }}
	help_close(file_desc_from, file_desc_to);
	return (0);
}
