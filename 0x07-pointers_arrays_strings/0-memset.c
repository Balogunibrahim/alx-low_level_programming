#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: The character that is checked 
 *
 * @n: the character that is checked
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p =s;
	while (n--)
	{
		*p++ =b;
	}
	return (s);
}
