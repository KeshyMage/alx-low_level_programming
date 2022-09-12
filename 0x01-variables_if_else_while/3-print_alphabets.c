#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry point
 *
 * Return: Always 0 (Sucess)
 *
 */

int main(void)
{

	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
