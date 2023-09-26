#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number elements in a ll
 * @h: pointer to the list_t list
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
size_t lenth = 0;

while (h != NULL)
{
lenth++;
h = h->next;
}
return (lenth);
}
