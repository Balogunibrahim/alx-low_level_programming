#include<stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabet in lowercase then upper case
 * Returns: 0
 */
int main(void)
{
	char genz;

	for (genz = 'a'; genz <= 'z'; genz++)
	{
		putchar(genz);
	}
	for (genz = 'A'; genz <= 'Z'; genz++)
	{
		putchar(genz);
	}
	putchar('\n');
	return (0);
}
