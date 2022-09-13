#include "main.h"

/**
 * print_alphabet_×10 - print alphabet
 *
 * Return: Always 0
 *
 */
void print_alphabet_×10(void)
{
	int alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_puthchar(alphabet);
		}

		count++;
		_putchar('\n');
	}


}




