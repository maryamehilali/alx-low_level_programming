#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a node at the beginning of a linked list.
 * @head: the head of the input singly linked list.
 * @str: the str data of the new added node.
 * Return: the address of the nex node on success.
 *	or NULL on fail.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int str_len;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	str_len = strlen(str);
	ptr->str = strdup(str);
	ptr->len = str_len;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
