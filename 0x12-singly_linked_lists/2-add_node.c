#include "lists.h"
/**
 * _strlen - reads a string for the number of characters
 * @s: pointer
 * Return: length of the success
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * add_node - adds a new node to the linked list
 * @head: pointer to the next node
 * @str: the data contained, a string
 * Return: pointer to the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
