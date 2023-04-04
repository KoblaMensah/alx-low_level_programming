#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: NULL if the function fails
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *_str;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_ = strdup(str);
	if (_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new->str = _str;
	new->i = i;
	new->next = *head;

	*head = new;

	return (new);
}
