#include <stdio.h>
#include "lists.h"


/**
 * print_list - Prints all nodes of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)

{
	size_t i = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
