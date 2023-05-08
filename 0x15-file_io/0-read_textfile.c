#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to the file
 * @letters: the number of letters to return
 *
 * Return: filename is NULL return 0,
 * if write fails or does not write the expected amount of bytes
 * return 0 if  file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_f, read_f, write_f;
	char *filecontent;

	if (filename == NULL)
		return (0);

	filecontent = malloc(letters * sizeof(char));
	if (filecontent == NULL)
		return (0);

	open_f = open(filename, O_RDONLY);
	read_f = read(open_f, filecontent, letters);
	write_f = write(STDOUT_FILENO, filecontent, read_f);

	if (open_f == -1)
	{
		free(filecontent);
		return (0);
	}

	if (read_f == -1 || write_f == -1 || write_f != read_f)
	{
		free(filecontent);
		close(open_f);
		return (0);
	}

	free(filecontent);
	close(open_f);

	return (write_f);
}
