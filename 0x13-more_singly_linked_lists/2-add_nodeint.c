#include "lists.h"
/**
 * add_nodeint- a function that adds a node at the begining of a list
 * @head: the first parameter
 * @n: number to be added
 *
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
