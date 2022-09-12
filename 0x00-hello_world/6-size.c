#include <stdio.h>
/*
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %ibytes(s)\n", sizeof(char));
	printf("Size of an int: %ibytes(s)\n", sizeof(int));
	printf("Size of a long int: %ibyte(s)\n", sizeof(long int));
0	printf("Size of a long long int: %ibyte(s)\n", sizeof(long long int));
	printf("Size of a long float: %ibyte(s)\n", sizeof(float));
	return (0);
}
