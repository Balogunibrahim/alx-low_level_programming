#include<stdio.h>
#include "function_pointers.h"
/**
 * int_index- a function that searches for an interger
 * @array: array that is searched
 * @size: size of the array
 * @cmp: function pointer
 * Return: 0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);

}
