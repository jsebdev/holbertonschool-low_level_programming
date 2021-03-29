# include "holberton.h"

/**
 * create_file - create a file
 * @filename: file
 * @text_content: text to copy on file
 * Return: return 1 if success -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, len = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_RDWR, 0600);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		if (write(file_d, text_content, len) == -1)
		{
			close(file_d);
			return (-1);
		}
	}
	close(file_d);
	return (1);
}
