#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node and returns the head node's data(n).
 * @head: First element in the linked list pointer.
 * Description: Function that deletes the head node and returns n.
 * Return: Data in the deleted element or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
