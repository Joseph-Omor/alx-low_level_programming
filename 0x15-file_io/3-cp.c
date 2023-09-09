#include "main.h"

/**
 * main - A program that copies the content of a file to another file
 * @argc: number of arguments passed to function
 * @argv: array containing arguments as strings
 *
 * Return: 0 on success, or 97, 98, 99 or 100 on error.
 */
int main(int argc, char **argv)
{
	FILE *file_to = NULL, *file_from = NULL;
	int c1, c2, bytes_read, bytes_written;
	char *message, *buffer;

	/* Handle incorrect argument count */
	if (argc != 3)
	{
		message = "Usage: cp file_from file_to";
		dprintf(2, "%s\n", message);
		exit(97);
	}
	/* Open and check source file (file_from) */
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		message = "Error: Can't read from file";
		dprintf(2, "%s %s\n", message, argv[1]);
		exit(98);
	}

	buffer = (char *)malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		fclose(file_from);
		exit(EXIT_FAILURE);
	}

	/* Open destination file (file_to) */
	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		message = "Error: Can't write to";
		dprintf(2, "%s %s\n", message, argv[2]);
		free(buffer);
		fclose(file_from);
		exit(99);
	}

	/* change file file_to's permissios to 'rw-rw-r--' */
	chmod(argv[2], 0664);

	/* Read content from file_from and write content to file_to */
	while ((bytes_read = fread(buffer, 1, 1024, file_from)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, file_to);
		if (bytes_written != bytes_read)
		{
			message = "Error: Can't write to";
			dprintf(2, "%s %s\n", message, argv[2]);
			free(buffer);
			fclose(file_from);
			fclose(file_to);
			exit(99);
		}
	}

	/* Close file descriptors */
	c2 = fclose(file_from);
	if (c2 != 0)
	{
		message = "Error: Can't close fd";
		dprintf(2, "%s %d\n", message, c2);
		exit(100);
	}
	c1 = fclose(file_to);
	if (c1 != 0)
	{
		message = "Error: Can't close fd";
		dprintf(2, "%s %d\n", message, c1);
		exit(100);
	}

	free(buffer);
	return (0);
}
