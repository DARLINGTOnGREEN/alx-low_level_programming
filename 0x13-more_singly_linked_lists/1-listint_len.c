#include "lists.h"
#include <stdio.h>

/**
 * listint_len - unction that returns the number of elements in a linked listint_t list
 * @h: pointer to the head of listint_t
 * Return: num of elements in listint_t list
 */

size_t listint_len(const listint_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
