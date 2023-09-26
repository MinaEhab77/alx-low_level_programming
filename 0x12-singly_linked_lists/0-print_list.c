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
printf("[%d] ", h->len);
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("%s\n", h->str);
h = h->next;
count++;
}
return (count);
}

