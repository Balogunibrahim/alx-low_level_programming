#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: The character that is checked 
 *
 * @n: the character that is checked
 *
 *@b: The character that is checked
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *mem = s, value = b;

	for (i = 0; i < n; i++)
	{
		mem[i] = value;
	}
	return (mem);
}
