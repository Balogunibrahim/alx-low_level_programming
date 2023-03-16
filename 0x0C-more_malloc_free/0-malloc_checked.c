#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked-a function that allocates memory using malloc
 * @b: character that is checked
 * Return: the address of malloc
 */
void *malloc_checked*(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
