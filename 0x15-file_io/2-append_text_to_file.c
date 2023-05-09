#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file.
 *@filename:  name of the file
 *@text_content: a NULL terminated string to add at the end of the file
 *
 *Return:  1 on success and -1 on failure
 *f filename is NULL return -1
 *if text_content is NULL
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int open_f, len, write_f;

	if (filename == NULL)
		return (-1);

	open_f = open(filename, O_WRONLY | O_APPEND);
	if (open_f == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
		write_f = write(open_f, text_content, len);
		if (write_f == -1)
		{
			close(open_f);
			return (-1);
		}
	}
	
	close(open_f);
	return (-1);
}
