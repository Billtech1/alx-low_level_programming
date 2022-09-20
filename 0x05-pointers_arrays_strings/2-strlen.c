#include "main.h"
#include <string.h>

/**
 * _strlen - retirns the length of a string
 * @s: string to evaluate
 * Return: string to evaluate
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
