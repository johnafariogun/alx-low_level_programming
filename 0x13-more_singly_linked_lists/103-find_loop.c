#include "lists.h"
/**
 * find_listint_loop - finds the address that the loop for a linked list starts
 * @head: the head node in the linked list
 * Return: the address of the node, else NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *tep = head;
	while (head != NULL)
	{
		if (head <= head->next)
			return (head);

		head = head->next;
	}
	return (NULL);
}
