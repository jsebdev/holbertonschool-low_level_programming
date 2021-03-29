# include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file
 * @text_content: text to copy on file
 * Return: return 1 if success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, len = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_RDWR | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		if (write(file_d, text_content, len) == -1)
			return (-1);
		return (1);
	}
	close(file_d);
	return (file_d);
}
