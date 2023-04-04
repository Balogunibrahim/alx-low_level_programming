#include "lists.h"
/**
 * listint_len- a function that returns te number of a node
 * @h: the parameter to be given
 *
 * Return: the size of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
