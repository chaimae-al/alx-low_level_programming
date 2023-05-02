#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: pointer to the first element
 * @n: the data to insert in the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;

	return (new_node);
}
