 #include "main.h"

/**
 * print_alphabet_x10- print 10times the alphabet, in lowercase
 * Return: 0 success
 */

void print_alphabet_x10(void)
{
	char letter, k;

	for (k = 0;  k <= 9; k++)
	{
		for (letter = 'a'; letter = 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
