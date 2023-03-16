#include "main.h"
#include<stdlib.h>
/**
 * _calloc- a function that allocates memeory using malloc
 * @nmemb: First argument
 * @size: second argument
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	p = (char *) ptr;

	for (i = 0; i < (nmemb * size); i++)
	{
		*p++ = 0;
	}
	return (ptr);
}
