#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings- a function that print set of strings with a seperator
 * @seperator: the seperator
 * @n: the size of the argument
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list(strings);
	unsigned int i;
	const char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, const char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i < (n - 1) && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(strings);
}
