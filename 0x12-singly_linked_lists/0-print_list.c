#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements in the linked list list_t
 * @h: the list_t list
 * Return: the number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}
	return (i);
}
