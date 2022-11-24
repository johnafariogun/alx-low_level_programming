#include "lists.h"
/**
 * free_listint_safe - frees a list_int linked list
 * @head: pointer to the address of the head node
 * Return: the number of the nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	int i, j;
	listint_t *temp;

	for (i = j = 0; *head != NULL || j; i++)
	{
		if (*head <= (*head)->next)
		{
			j = 1;
			break;
		}

		temp = (*head)->next;
		free(*head);
		*head = temp;
		j = 0;
	}

	if (j)
	{
		temp  = (*head)->next;
		free(*head);
		i++;
	}

	*head = NULL;
	return (i);
}
