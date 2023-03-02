#include "main.h"
/*
 * _strncat- a fucntion that cat two string but terminates at n index
 *
 * @dest: The character that is checked
 *
 * @src: The charater that is checked
 *
 * @n: The character that is checked
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + n] = '\0';

	return (dest);
}
