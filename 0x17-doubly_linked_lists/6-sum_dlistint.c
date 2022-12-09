#include "lists.h"
/**
 * sum_dlistint - frees the dlistint_t list
 *
 * @head: pointer to the head of the doubly linked list
 * Return: the sum
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *i;
	int sum = 0;

	while (head)
	{
		i = head->next;
		sum += head->n;
		head = i;
	}
	return (sum);
}
