#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * main - creates a key geenerator
 * Return: 0 on success
 */
int main(void)
{
	char password[] = "0123456789abcdefghijklmnoqprstuvwyzxABCDEFGHIJKLMNOQPRSTUYWVZX!@#$^&*";
	int i, num = 0;

	srand(time(NULL));
	while (num < 2688)
	{
		i = rand() % 84;
		num += password[i];
		printf("%c", password[i]);
	}
	printf("%c", 2772 - num);
	return (0);	
}
