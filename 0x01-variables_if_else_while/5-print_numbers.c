#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	printf("\n");
	return (0);
}
