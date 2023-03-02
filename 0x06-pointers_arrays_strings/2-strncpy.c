#include "main.h"
/**
 * _strncpy- Afunction that copies a string from src to dest
 *
 * @dest: The character that is checked
 *
 * @src: The character that is checked
 *
 * @n: The character that is checked
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;
	int i;

	for (i = 0; i < n && *s != '\0'; i++)
	{
		*d++ = *s++;
	}
	for (; i < n; i++)
	{
		*d++ = '\0';
	}
	return (dest);
}
