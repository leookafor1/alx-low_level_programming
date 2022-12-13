#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %lu: byte(x)\n", sizeof(char));
	printf("size of a int: %lu: byte(x)\n", sizeof(int));
	printf("size of a long int: %lu: byte(x)\n", sizeof(long int));
	printf("size of a long long int: %lu: byte(x)\n", sizeof(long long int));
	printf("size of a float: %lu: byte(x)\n", sizeof(float));
	return (0);
}
