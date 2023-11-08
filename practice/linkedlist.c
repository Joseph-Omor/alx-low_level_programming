/**
 * C program to show insertinng a node
 * at front of given linked list
 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

/**
 * Given a reference (pointer to pointer to the head of a list and an int,
 * inserts a new node on the front of the list.
 */
void insertAtFront(struct Node **head_ref, int new_data)
{
	struct Node *new_node;
	// 1. allocate node
i	new_node = (struct Node *)malloc(sizeof(struct Node));

	// 2. put in the data
	new_node->data = new_data;

	// 3. Make next of new node as head
	new_node->next = (*head_ref);

	// 4. move the head to point to the new node
	(*head_ref) = new_node;
}
