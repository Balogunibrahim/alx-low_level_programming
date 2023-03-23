#include<stdio.h>
#include<stdlib.h>
#include "3-calc.h"
/**
 * main- Entry point
 * @argc: Number of argument passed
 * @argv: An array containing the name of argument passed
 *
 * Rteurn: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		print("Error\n");
		exit(98);
	}
	k = f(i, j);
	printf("%d\n", c);
	return (0);
}
