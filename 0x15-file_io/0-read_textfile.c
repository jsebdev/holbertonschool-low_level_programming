# include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, b_readed;
	char *buf;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buf = malloc(sizeof(*buf) * (letters + 1));
	if (buf == NULL)
		return (0);
	b_readed = read(file_d, buf, letters);
	if (b_readed == -1)
		return (0);

	write(STDOUT_FILENO, buf, b_readed);
	close(file_d);
	free(buf);
	return (b_readed);
}
