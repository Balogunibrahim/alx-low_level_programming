#include "main.h"
#include<stdio.h>
#include<time.h>
/* main - Entry point
 *
 * Description: A program that generates a valid password of 10 length
 *
 * Return: 0
 */
int main*(void)
{
	char password[11];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		password[i] = charset[rand() % sizeof(charset)];
	}
	password[10] ='\0';
	printf("%s\n", password);
	return (0);
}
