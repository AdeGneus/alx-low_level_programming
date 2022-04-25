#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to head
 * @index: index of the node
 * Return: index or NULL if node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int tracker;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		tracker++;

		if (tracker == index)
			return (head);
	}
	if (index > tracker)
		return (NULL);

	return (NULL);
}
