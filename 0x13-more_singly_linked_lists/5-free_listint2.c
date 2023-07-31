#include "lists.h"
#include <stdlib.h>

#include "lists.h"

/**
 * free_listint2 - Function that frees linked list
 * @head: Points to the lists to be freed.
 * Description: Functions that frees listint_t.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
