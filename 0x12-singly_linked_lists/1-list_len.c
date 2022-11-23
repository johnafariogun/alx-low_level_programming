#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints number of the elements in the linked list list_t
 * @h: the list_t list
 * Return: the number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{

		i++;
		h = h->next;
	}
	return (i);
}
