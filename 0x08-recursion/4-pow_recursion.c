#include "main.h"
/*
 * _pow_recursion- calculates the the value of x to the power of y
 * @x: The int that is calculated
 * @y: The int that is calculated
 * Return: The value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
