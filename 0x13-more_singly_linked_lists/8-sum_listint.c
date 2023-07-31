#include "lists.h"

/**
 * sum_listint - Sum of all the data(n) of listint_t list
 * @head: first node in the linked list
 * Description: Function that returns sum of all the data in a listint_t list
 * Return: Sum result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
