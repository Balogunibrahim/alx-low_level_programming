#include "main.h"
/**
 * _isalpha- a function that checks if a character is upper case
 *
 * @c: The character that is checked
 *
 * Return: 1 if it the character is uppercase and 0 if it is otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
