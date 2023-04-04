#include "lists.h"
/**
 * print_listint- a function that prints a singy linked list
 * @h: the list to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

