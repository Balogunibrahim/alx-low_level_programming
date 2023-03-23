#include<stdio.h>
#include<stdlib.h>
#include "3-calc.h"
/**
 * op_add- Returns the sum of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- Returns the subtraction of two interger
 * @a: first interger
 * @b: second interger
 *
 * Return: the subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul- returns the product of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- returns the division of two interger
 * @a: first interger
 * @b: second interger
 *
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod- Returns the modulus between a and b
 * @a: first interger
 * @b: second interger
 *
 * Return: the moduls between a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
