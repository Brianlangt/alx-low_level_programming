#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times then stops.
* Return= always 0
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i);
			_putchar('n');
		}
	}
	_putchar('\n');

}
