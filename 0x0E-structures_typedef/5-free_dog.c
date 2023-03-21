#include<stdlib.h>
#include "dog.h"
/**
 * free_dog- a function that free struct dog
 * @d: the variable that points to struct dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
