#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n = 48;
while (n <= 57)
{
	putchar(n);
	n += 1;
}
printf("\n");
return (0);
}