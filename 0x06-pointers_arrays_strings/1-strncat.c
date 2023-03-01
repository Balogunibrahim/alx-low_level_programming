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
char _strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	int n;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest_ptr[i] = src[i];
	}
	dest_ptr[i] = '\0';
	return (dest);
}
