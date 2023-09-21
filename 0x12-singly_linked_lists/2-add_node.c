#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node
 * @head: double pointer list_t list
 * @string: new string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *string)
{
	list_t *new;
	unsigned int len = 0;

	while (string[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->string = strdup(string);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

