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

	if (head == NULL)
		return (NULL);

	temp = head;
	tep = head;

	while (temp->next != NULL && tep->next->next != NULL)
	{
		temp = temp->next;
		tep = tep->next->next;
		if (temp == tep)
		{
			temp = head;
			while (temp != tep)
			{
				temp = temp->next;
				tep = tep->next;
			}
			return (tep);
		}
	}
	return (NULL);
}
