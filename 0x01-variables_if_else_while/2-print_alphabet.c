#include<stdio.h>
/**
 * main - Entry point
 * Description: print a-z in lowercase
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = "a"; c <= "z"; c++)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}

