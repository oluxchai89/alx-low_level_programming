#include "main.h"

/**
 *  print_alphabet-prints the alhpa in lowercase
 */

void print_alphabet(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

	_putchar('\n');
}
