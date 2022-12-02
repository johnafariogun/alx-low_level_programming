#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: pointer to the file
 * @text_content: the string to be appended to the file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, f, result;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_APPEND | O_WRONLY, 0665);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{

		for (i = 0; text_content[i] != 0; i++)
			;

		result = write(f, text_content, i);
	}
	if (result == -1)
		return (-1);
	result = close(f);

	if (result == -1)
		return (-1);
	return (1);
}
