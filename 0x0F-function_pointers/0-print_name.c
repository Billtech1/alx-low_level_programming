#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function thatvuses a function pointer to print name.
 * @name: argument of function.
 * @f: argument of function.
 * Return: 0 (Success)
 */

void print_name(char *name, void (f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
