#include "main.h"
/**
 * _strcat- a function that concatenates two strings
 *
 * @dest: the character that is checked
 *
 * @src: the character that is checked
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
