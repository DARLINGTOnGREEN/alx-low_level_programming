#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *chips = h;
	size_t count = 0;

	while (chips != NULL)
	{
		printf("%d\n", chips->n);
		count += 1;
		chips = chips->next;
	}
	return (count);
}
