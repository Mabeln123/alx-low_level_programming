#include "lists.h"

/**
 * get_nodeint_at_index - Functions that returns the nth node of linked list.
 * @head: First and beginning of a linked list.
 * @index: The node to return index.
 * Description: Functions that returns the nth node of listint_t linked list.
 * Return: Pointer to node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
