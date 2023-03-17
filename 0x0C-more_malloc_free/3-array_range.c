#include "main.h"
#include<stdlib.h>
/**
 * array_range- a function that creates a array of intergers
 * @min: first argument
 * @max: second argument
 * Return: 0
 */
int *array_range(int min, int max)
{
	int size;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = (int *) malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
