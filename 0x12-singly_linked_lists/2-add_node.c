#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: pointer to pointer to head of list
 * @str: string representing data in list
 *
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicated_str;
	list_t *new_node;

	/* Allocate memory for the new node */
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

	/* Initialize the new node's fields */
	new_node->str = duplicated_str;
	new_node->len = strlen(str);
	new_node->next = *head;

	/* update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}
