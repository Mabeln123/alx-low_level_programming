#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - At the beginning of linked list, it addes a new node.
 * @head: First node in the list pointer.
 * @n: Datas to be inserted in new node.
 * Description: Functions that add new node at the beginning.
 * Return: Returns NULL if it fails or pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
