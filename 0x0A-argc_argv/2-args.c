#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of argument
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
