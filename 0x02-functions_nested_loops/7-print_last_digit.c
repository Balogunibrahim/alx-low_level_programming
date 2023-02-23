#include "main.h"
/**
 * print_last_digit - print the last digit wether it is positive or negative 
 *
 * @n: the number that is checked 
 *
 * Return: return the last digit
 *
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
