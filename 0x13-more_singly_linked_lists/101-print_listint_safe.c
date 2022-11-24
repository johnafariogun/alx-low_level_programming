#include "lists.h"
/**
 * print_listint_safe - prints a list_int linked list
 * @head: pointer to the address of the head node
 * Return: the number of the nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, j;

	if (head == NULL)
		return (0);

	for (i = j = 0; head != NULL || j; i++)
	{
		printf("[%p] %d\n", (void *) head, head->n);

		if (head <= head->next)
		{
			j = 1;
			break;
		}

		head = head->next;
		j = 0;
	}

	if (j)
	{
		head  = head->next;
		printf("-> [%p] %d\n", (void *) head, head->n);
		i++;
	}

	return (i);
}
