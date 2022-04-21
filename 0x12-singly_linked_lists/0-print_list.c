#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to singly linked list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int num_node;

	num_node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		num_node++;
	}
	return (num_node);
}
