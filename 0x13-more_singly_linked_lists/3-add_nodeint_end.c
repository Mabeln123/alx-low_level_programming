#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -Add node at end of listint_t
 * @head: First element in the list pointer.
 * @n: Data to be inserted in new element.
 * Description: Function that adds node at the end.
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
