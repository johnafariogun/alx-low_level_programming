#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of the linked list
 * @head: pointer to the head of the linked list
 * @n: data to be added to the linked list
 * Return: the address of the new element, or NULL if it failes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return NULL;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head =  new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
