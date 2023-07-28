#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a node at the end of a linked list.
 * @head: the head of the input singly linked list.
 * @str: the str data of the new added node.
 * Return: the address of the new node on success.
 *	or NULL on fail.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	ptr = *head;
	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
