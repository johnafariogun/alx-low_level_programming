#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the linked list
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}
