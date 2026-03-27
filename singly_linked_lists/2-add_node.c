#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)

{
	list_t *new;
	int i = 0;

	if (head == NULL)
	return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
	free(new);
		return (NULL);
	}
	while (str[i] != '\0')
	i++;

	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
