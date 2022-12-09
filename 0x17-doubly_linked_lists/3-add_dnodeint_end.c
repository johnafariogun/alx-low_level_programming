#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node to the end of the dlistint_t list
 *
 * @head: pointer to the head of the doubly linked list
 * @n: int to be added to the list
 * Return: the address of the new element or NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i, *j;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		i->prev = NULL;
		*head = i;
		return (i);
	}
	j = *head;
	while (j->next != NULL)
		j = j->next;
	j->next = i;
	i->prev = j;

	return (i);
}
