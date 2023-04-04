#include "lists.h"
/**
 * free_listint2- a function that set head to NULL after freeing the list
 * @head: the list ti be freed
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
