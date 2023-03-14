#include "main.h"
#include<stddef.h>
#include<stdlib.h>
/**
 * create_array- a function that creates an array of characters
 * @size: The size of the array
 * @c: the initialized char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char*) malloc(size * sizeof(char c));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}	
