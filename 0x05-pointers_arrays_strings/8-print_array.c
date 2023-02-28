#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integer on a new line.
 *
 * @a: int to be checked
 *
 * @n: int to be checked
 *
 * Return: 0
 */
void print_array(int *a, int  n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
		{
			printf(", ");
		}
	}
	printf('\n');
}
