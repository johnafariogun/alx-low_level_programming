#include "lists.h"
/**
 * sum_listint - sums up all the data up to a node n
 * @head: a pointer to the head node
 * Return: 0 if empty, else the list sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
