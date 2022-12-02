#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: pointer to the file
 * @text_content: text that is to be written to the file
 * Return: 1 if succesful, NULL Aand -1 else
 */
int create_file(const char *filename, char *text_content)
{
	int f, i, result;

	if (filename == NULL)
		return (-1);
	/*0600 is the file mode , read and write*/
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != 0; i++)
		;

	result = write(f, text_content, i);
	if (result == -1)/* if the file wasn't written into successfully*/
		return (-1);
	result = close(f);

	if (result == -1)/*if the file wasn't closed successfully*/
		return (-1);

	return (1);
}
