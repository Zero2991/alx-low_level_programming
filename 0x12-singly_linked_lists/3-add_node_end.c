#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dp;
	int len;
	list_t *nw, *last;

	nw = malloc(sizeof(list_t));
	if (nw == NULL)
		return (NULL);

	dp = strdup(str);
	if (str == NULL)
	{
		free(nw);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	nw->str = dp;
	nw->len = len;
	nw->next = NULL;

	if (*head == NULL)
		*head = nw;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = nw;
	}

	return (*head);
}
