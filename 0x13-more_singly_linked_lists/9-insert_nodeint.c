#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an index idx
 * @head: pointer to the address of the head node
 * @idx: index where the new node should be added starts from 0
 * @n: integer to be contained in the node
 * Return: the address of the new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;

	if (head != NULL && idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (temp != NULL)
	{
		if (i + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	temp = temp->next;
	i++;
	}
	free(temp);
	return (NULL);
}
