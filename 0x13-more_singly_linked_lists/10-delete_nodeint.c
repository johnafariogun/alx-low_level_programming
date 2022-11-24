#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nide at an index
 * @head: pointer to the address of the node
 * @index: index of the node to be deleted
 * Return: On success 1, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;

	while (temp != NULL)
	{
		if (index == i + 1)
		{
			del = temp->next;
			temp->next = del->next;
			free(del);
			return (1);
		}

		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next, i++;
	}
	return (-1);
}
