#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup-  a function that returns a pointer to a newly allocated space in memory
 * @s: charcter that is being checked
 * Return: The newly allocated memory
 */
char *_strdup(char *s)
{
	unsigned int i;
	char *a;
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	a = (char *) malloc(sizeof(char) * (i + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		a[i] = s[i];
	}
	a[i] = '\0';
	return (a);
}
