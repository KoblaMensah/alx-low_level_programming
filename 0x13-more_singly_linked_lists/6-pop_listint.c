#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 *
 * @head: pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: zero if the linked list is empty
 *         Otherwise - i
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (i);
}
