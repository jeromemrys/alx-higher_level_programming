#include "lists.h"

/**
 * insert_mode - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert
 * Return: 0 if the function fails or pointer to the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		retutn(NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		next->next = node;
		*head = new;
		return (new);
	}
	while (node && node->next && node->next->n < number)
		node = node->next;

	next->next = node->next;
	node->next = new;

	return (new);
}

