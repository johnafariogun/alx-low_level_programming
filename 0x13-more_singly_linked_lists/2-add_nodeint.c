#include "lists.h"
/**
 * add_nodeint - adds a new node to the linked list
 * @head: the head of the linked list
 * @n: the data to be added to the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest;

	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);

	latest->n = n;
	latest->next = *head;
	*head = latest;
	return (latest);
}
