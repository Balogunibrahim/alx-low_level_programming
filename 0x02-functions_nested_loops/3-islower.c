#include "main.h"
/**
 * _islower - A function that checks if a letter is lower case
 *
 * @c: The character to be checked 
 *
 * Return: 1 if charcter is lowercase and 0 if it is otherwise
 *
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
