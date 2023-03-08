#include "main.h"
/**
 * _print_rev_recursion-  a function that prints a string in reverse.
 *
 * @s: The char that is to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
