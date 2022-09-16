#include "main.h"
/**
* print_alphabet_x10 : prints the alphabet 10 times then stops.
*
* Return: always 0
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar((i) + 10);
	}
	_putchar('\n');

}
