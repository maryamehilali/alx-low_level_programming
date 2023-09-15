#include "lists.h"

/**
 * sum_dlistint - returns sum of att data of a doubly inked list
 * @head: pointer to the head of the list
 * Return: sum of all data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
