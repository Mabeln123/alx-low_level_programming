#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list.
 * @head: First node in the list.
 * Description: Function that reverses a listint_t linked list.
 * Return: Returnes pointer to first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
