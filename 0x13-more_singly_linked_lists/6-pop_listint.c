#include "lists.h"
/**
 * pop_listint - pops the head node and returns the data
 * @head: pointer to the head node
 * Return: if empty 0, else the data there
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = temp->next;
	free(temp);

	return (data);
}
