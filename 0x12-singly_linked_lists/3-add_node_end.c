#include "lists.h"

/**
 * add_node_end - A function that adds a new node at end of list
 * @head: pointer to pointer of list and NULL if it fail.s
 * @str: string contained in data
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *duplicated_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	duplicated_str = strdup(str);
	if (duplicated_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = duplicated_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* if the linked list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}


	/* Traverse to find the current last node */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}

