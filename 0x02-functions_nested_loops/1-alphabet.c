#include "main.h"

/**
* print_alphabet - prints alphabet in lowercase, followed by a new line
* return 0
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
