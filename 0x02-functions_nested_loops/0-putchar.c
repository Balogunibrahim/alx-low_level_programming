#include "main.h"
/**
 * main - Entry point
 * Description: Prints _putchar followed by a new line 
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
