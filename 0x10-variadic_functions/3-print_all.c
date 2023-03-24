#include<stdio.h>
#include<stdarg.h>
#include "variadic_function.h"
/**
 * print_all- a variadic that prints mutiple data type
 * @format: the format to follow
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list(all);
	char c;
	int i;
	float f;
	char *s;

	va_start(all, format);

	while (*format)
	{
		if (*format == "c")
		{
			c = va_arg(all, int);
			printf("%c", c);
		}
		else if (*format == "i")
		{
			i = va_arg(all, int);
			printf("%d", i);
		}
		else if (*format == "f")
		{
			f = va_arg(all, double);
			printf("%f", f);
		}
		else if (*format == "s")
		{
			s = va_arg(all, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else if
			{
				printf("%s", s);
			}
		}
		format++;
		if (*format)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(all);
}
