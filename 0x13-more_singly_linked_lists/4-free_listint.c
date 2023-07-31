#include "lists.h"
#include <stdlib.h>

#include "lists.h"

/**
 * free_listint - Fress listint_t
 * @head: Linked lists to free.
 * Description: Functions that frees a linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
