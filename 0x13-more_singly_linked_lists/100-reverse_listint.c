#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: the first node of the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward_node = NULL;
	listint_t *backward_node = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		forward_node = (*head)->next;
		(*head)->next = backward_node;
		backward_node = *head;
		*head = forward_node;
	}
	*head = backward_node;
	return (*head);
}
