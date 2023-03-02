#include "main.h"
/**
 * reverse_array- a function that reverse the content of an array
 *
 * @a: The character that is checked 
 *
 * @n: the character that is checked
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;	
	}
}
