#include "lists.h"

/**
 * listint_len - Returns number of elements in linked lists
 * @h: Traverse linked list of type listint_t.
 * Description: Function that returns number of elements.
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
