#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count;

	char sec_letters;

	for (count = 0; count <= 9; count++)

	{

		for (sec_letters = 'a'; sec_letters <= 'z'; sec_letters++)

		{
			_putchar(sec_letters);
		}

		_putchar('\n');
	}
}

