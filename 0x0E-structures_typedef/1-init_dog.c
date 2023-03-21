#include "dog.h"
/**
 * init_dog - a fucntion that initialize a varible type struct dog
 * @d: the varaible that points to struct dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float *age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
