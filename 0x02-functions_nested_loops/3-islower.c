#include "main.h"
/**
 * _islower(int c) - A function that checks if a letter is lower case
 *
 * Return: 1 if charcter is lowercase and 0 if it is otherwise
 *
 * @c: the character to be checked 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	
	}
}
