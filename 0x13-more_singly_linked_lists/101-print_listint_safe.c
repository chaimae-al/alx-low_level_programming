#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = NULL;
	const listint_t *loop_node = NULL;
	size_t counter = 0;
	size_t new_counter;

	current_node = head;
	while (current_node)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		counter++;
		current_node = current_node->next;
		loop_node = head;
		new_counter = 0;
		while (new_counter < counter)
		{
			if (current_node == loop_node)
			{
				printf("-> [%p] %d\n", (void *)current_node, current_node->n);
				return (counter);
			}
			loop_node = loop_node->next;
			new_counter++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
