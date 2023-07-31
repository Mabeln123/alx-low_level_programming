#include "lists.h"

/**
 * print_listint - Print elements of linked list.
 * @h: Prints type listint_t linked lists.
 * Description: Prints all elements of a listint_t list.
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
