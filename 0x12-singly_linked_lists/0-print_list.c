#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements ll
 * @h: pointer to the list_t structure
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}

