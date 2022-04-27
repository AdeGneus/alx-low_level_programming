#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to head node
 *
 * Return: pointer to node where the loop starts or NULL if otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev_node, *next_node;

	prev_node = next_node = head;
	while (prev_node && next_node && next_node->next)
	{
		prev_node = prev_node->next;
		next_node = next_node->next->next;
		if (prev_node == next_node)
		{
			prev_node = head;
			break;
		}
	}
	if (!prev_node || !next_node || !next_node->next)
		return (NULL);
	while (prev_node != next_node)
	{
		prev_node = prev_node->next;
		next_node = next_node->next;
	}
	return (next_node);
}
