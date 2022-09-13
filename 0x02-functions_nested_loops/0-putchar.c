#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char *ab = "_putchar";

	while (*ab)
	{
		_putchar(*ab);
		ab++;
	}
	_putchar('\n');

	return (0);
}
