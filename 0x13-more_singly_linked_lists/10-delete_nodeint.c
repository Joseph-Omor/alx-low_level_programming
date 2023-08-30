#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * 'index' of list
 * @head: Pointer to head of listint_t linked list.
 * @index: The node to be deleted
 *
 * Return: 1, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current, *prev;
	unsigned int count;

	current = *head;
	prev = NULL;
	count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	/* Handle deletion at of head node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	/* traverse list to handle deletion at index within list */
	while (current != NULL)
	{
		if (count == index)
		{
			/**
			 * make previous node's pointer skip current
			 * and point to next node
			 */
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		count++;
	}
	/* Index out of bounds, deletion failed */
	return (-1);
}
