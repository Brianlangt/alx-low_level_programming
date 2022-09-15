#include "main.h"

/**
 * printalpha - prints alphabet except c & k
 *
 * Return: void
 */

void printalpha(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'c' || i == 'k')
			continue;
		_putchar(i);
		_putchar('\n');
	}
	_putchar('\n');
}
