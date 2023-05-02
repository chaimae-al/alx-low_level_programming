#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}
