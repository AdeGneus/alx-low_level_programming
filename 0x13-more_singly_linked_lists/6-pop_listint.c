#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to head
 * Return: head node's data or 0 if list is empty
*/
int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp = *head;

	if (*head == NULL || head == NULL)
		return (0);

	*head = temp->next;
	data = temp->n;

	free(temp);
	return (data);
}
