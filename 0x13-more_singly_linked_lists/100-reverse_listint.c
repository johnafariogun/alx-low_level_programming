#include "lists.h"
/*
 * reverse_listint - this reverses a linked list and returns a pointer
 * @head: pointer to the address of the head of the linked list
 * Return: pointer to the head of the new reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	tmp = NULL;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = temp;
	}
	(*head)->next = tmp;
	return (*head);
}
