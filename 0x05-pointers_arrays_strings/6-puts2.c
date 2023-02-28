#include "main.h"
/*
 * puts2 - prints every other character of a string starting with the first character
 *
 * @str: character that is checked
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	while (*str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
