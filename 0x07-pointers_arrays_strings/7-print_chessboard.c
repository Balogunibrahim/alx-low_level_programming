#include "main.h"
/**
 * print_chessboard- A program that prints a chess board
 *
 * @a: the character that is checked
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(" ");
		}
		_putchar('\n');
	}
}
