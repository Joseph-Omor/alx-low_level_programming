#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a
 * listint_t list.
 * @head: Pointer to the head of the list
 * @index: Index to of the nth node.
 *
 * Return: The nth node of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
