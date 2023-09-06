#include "main.h"

/**
 * read_textfile - A function that reads a text file and,
 * prints it to POSIX standard output.
 * @filename: file to read from
 * @letters: number of letters it should read and prints
 *
 * Return: Actual number of letters it could read and print, 0 if error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t read_count = 0;

	if (filename == NULL) /* if filename is NULL */
	{
		return (0);
	}

	/* open a file and collect its file descriptor */
	fp = fopen(filename, "r");
	if (fp == NULL) /* if file cannot be opened */
	{
		return (0);
	}

	/* create buffer(space in heap) to store content of file */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* if memory allocation fails */
	{
		return (0);
	}

	/* using fread, copy content in file into buffer */
	read_count = fread(buffer, sizeof(char), letters, fp);

	/* close the file */
	fclose(fp);

	if (read_count == 0)
	{
		return (0);
	}

	/* write the contents in buffer to stdout */
	fwrite(buffer, sizeof(char), read_count, stdout);

	free(buffer);
	return (read_count);
}

