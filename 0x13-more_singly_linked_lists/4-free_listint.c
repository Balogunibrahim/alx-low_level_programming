#include "lists.h"
/**
 * free_listint- a function that frees a list
 * @head: the list to be freed
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
