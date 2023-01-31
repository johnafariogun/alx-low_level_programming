#include <unistd.h>
#include <string.h>
/**
 * main - entry to the fucntion writes and returns the length of a string
 * Return: on failure 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
