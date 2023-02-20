#include<stdio.h>
/**
 * main - Entry point
 * Description: Print 0-9 using the putchar function
 * Return: o
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
