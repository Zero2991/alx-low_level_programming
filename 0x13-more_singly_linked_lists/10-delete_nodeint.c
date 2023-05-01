#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aka = *head;
	listint_t *cut = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(aka);
		return (1);
	}

	while (i < index - 1)
	{
		if (!aka || !(aka->next))
			return (-1);
		aka = aka->next;
		i++;
	}


	cut = aka->next;
	aka->next = cut->next;
	free(cut);

	return (1);
}
