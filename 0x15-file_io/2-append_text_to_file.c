#include "main.h"

/**
 * append_text_to_file - Appends text content to the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to add to end of file
 *
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t n_bytes;
	FILE *file;

	if (filename == NULL)
	{
		return (-1); /* Handle NULL filename */
	}

	if (text_content == NULL)
	{
		return (1); /* Nothing to add, return success */
	}

	/**
	 * Open the file in append mode, and
	 * collect pointer to opened stream(FILE *)
	 */
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1); /* return -1(error) if fopen fails */
	}

	/* write entire length of text content into stream pointed to by file */
	n_bytes = fwrite(text_content, sizeof(char), strlen(text_content), file);
	fclose(file); /* Close stream */

	if (n_bytes != strlen(text_content))
	{
		return (-1); /* Failed to write the entire document */
	}
	return (1);
}
