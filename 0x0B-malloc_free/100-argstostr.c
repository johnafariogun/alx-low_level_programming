#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates the arguments into a string separated with new line
 * @ac: number of arguments to the program
 * @av: array of the arguments
 * Return: returns the string or null if 0 arguments
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int i, argc, argv, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argc = 0; argc < ac; argc++)
	{
		for (argv = 0; av[argc][argv]; argv++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	i = 0;

	for (argc = 0; argc < ac; argc++)
	{
		for (argv = 0; av[argc][argv]; argv++)
			string[i++] = av[argc][argv];

		string[i++] = '\n';
	}

	string[size] = '\0';

	return (string);
}
