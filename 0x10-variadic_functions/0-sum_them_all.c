#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- a function that returns the sum of all its parameter
 * @n: The size of the expected arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list(numbers);
	unsigned int i;
	int sum = 0;

	if ( n == 0)
		return (0);
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
