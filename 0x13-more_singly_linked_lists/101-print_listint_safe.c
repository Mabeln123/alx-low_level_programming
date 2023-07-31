#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0 or number of unique nodes.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *koala, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	koala = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (koala == hare)
		{
			koala = head;
			while (koala != hare)
			{
				nodes++;
				koala = koala->next;
				hare = hare->next;
			}

			koala = koala->next;
			while (koala != hare)
			{
				nodes++;
				koala = koala->next;
			}

			return (nodes);
		}

		koala = koala->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Safely Prints listint_t list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes that is or are in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
