#include "lists.h"
/**
 * get_nodeint_at_index - locates a node and returns the data
 * @head: pointer to the head node
 * @index: the index of the node, starting from 0
 * Return: if empty NULL, else the data there
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
