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
 * add_node_end - adds a new node at the end of the linked list
 * @head: a pointer to the head of the linked list
 * @str: the string to be added in the node
 * Return: Null or pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}
	return (*head);
}
