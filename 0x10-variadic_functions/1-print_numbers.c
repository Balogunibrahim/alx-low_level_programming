#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers- a function that print numbers with const seperator
 * @seperator: The seperator
 * @n: the size of the argument
 * Return: 0
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list(numbers);
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i < (n - 1) && seperator == NULL)
		{
			printf("%s", seperator);
		}
	}
	va_end(numbers);
	printf("\n");
}
