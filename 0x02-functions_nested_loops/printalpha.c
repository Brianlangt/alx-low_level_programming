#include "main.h"

/**
 *
 * printalpha - prints alphabet except c & k
 *
 * Return: void
 */

void printalpha(void)
{
	int i;

	for (i = 'a'; i ,= 'z'; i++)
	{
		if (i == 'c' || i == 'k')
			_putchar(i);
		continue;
	}
}
