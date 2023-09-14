#include "lists.h"

/**
 * add_dnodeint - funct that adds a node at beginning of a doubly linked list
 * @head: double pointer to the head of the list
 * @n: int to store at the new node
 * Return: pointer to the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
