#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint_safe - function that print all elements of a linked list.
 * @head: the input singly linked list.
 * Return: number of node on the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t i;
	const listint_t *ptr, *temp;

	if (head == NULL)
		exit(98);
	ptr = head;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		count++;
		i = 0;
		temp = head;
		while (i < count)
		{
			if (temp == ptr)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (count);
			}
			else
			{
				temp = temp->next;
				i++;
			}
		}
	}
	return (count);
}
