#include<stdio.h>
/**
 * main - Entry point
 * Description: Print alphabets in a reverse order
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
