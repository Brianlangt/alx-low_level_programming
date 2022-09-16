#include "main.h"
/**
* printalphabet - printts the alphabet in lower case
* Return= always 0
*/

void printalphabet(void)
{
	int i

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\');
	}
}
