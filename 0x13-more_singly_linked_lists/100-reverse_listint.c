#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv = NULL;
	listint_t *nt = NULL;

	while (*head)
	{
		nt = (*head)->nt;
		(*head)->next = pv;
		pv = *head;
		*head = nt;
	}

	*head = pv;

	return (*head);
}
