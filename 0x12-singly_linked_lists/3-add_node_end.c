#include "lists.h"
#include "string.h"
#include "stdlib.h"

/**
 * add_node_end - A function that adds a new node to the end of a list
 * @head: pointer to head of list
 * @str: string
 *
 * Return: address of new node, NULL if unsuccessful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *current;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	/* handle for when list is empty */
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	current = *head;

	/* traverse list till end of list */
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;

	return (newNode);
}
