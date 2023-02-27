#include "main.h"
/**
 * _strlen - a fucntion that prints out the length of *s
 *
 * @s : character that is checked
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
