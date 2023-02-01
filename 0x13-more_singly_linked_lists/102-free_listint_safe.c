#include "lists.h"
/**
 * free_listint_safe - frees a list_int linked list
 * @head: pointer to the address of the head node
 * Return: the number of the nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i = 0;
	listint_t *temp;

	if (head == NULL || !*head)
		return (0);

	while (*head)
	{
		if (*head <= (*head)->next)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			i++;
		}
		else
		{
			free(*head);
			*head = NULL;
			i++;
			break;
		}
	}

	*head = NULL;
	return (i);
}
