#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 * Description: Prints the last digit stored in a variable
 * Returns: 0
 */
int main(void)
{
	int n,m;

	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m  > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last of %d is %d and is 0\n", n, m);
	}
	return (0);
}
