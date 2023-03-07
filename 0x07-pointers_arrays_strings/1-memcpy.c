#include "main.h"
/**
 * _memcpy- Copies n bytes from the memory area src
 *
 * @src: source code to copy
 *
 * @dest: destination for src
 *
 * @n: how many bytes to be copied
 *
 * Return: dest;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]
	}
	return (dest);
}
