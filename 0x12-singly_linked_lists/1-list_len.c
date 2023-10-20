#include "list.h"

/**
 * list_len - Calculate number of elements.
 * @h: Pointer tha points to a list
 * Return: Integer value
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
