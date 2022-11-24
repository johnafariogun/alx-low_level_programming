#include "lists.h"
/**
 * print_listint - prints the number of nodes present n the linked list
 * @h: the linked list head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
