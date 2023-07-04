#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a new node at the beginning of a list
 * @head: pointer to head list
 * @str:  string
 *
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

