#include<stdio.h>
#include "function_pointers.h"
/**
 * array_iterator- a function that executes two array.
 * @array: The array to be executed
 * @size: size of the array
 * @action:  a function pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
