#include "lists.h"

/**
 * pop_listint - A function that deletes the head of a listint list.
 * @head: pointer to head of list
 *
 * Return: head node's data (n) or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int hold_data;

	if ((*head)->next == NULL)
	{
		free(head);
		return (0);
	}
	else
	{
		hold_data = (*head)->n;
		*head = (*head)->next;
		return (hold_data);
	}
}
