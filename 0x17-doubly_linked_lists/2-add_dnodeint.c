#include "lists.h"
/**
 * add_dnodeint - Adds a new node to the head of the dlistint_t list
 *
 * @head: pointer to the head of the doubly linked list
 * @n: int to be added to the list
 * Return: the address of the new element or NULL
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->prev = NULL;
	i->next = *head;
	if (*head != NULL)
		(*head)->prev = i;
	*head = i;
	return (i);
}
