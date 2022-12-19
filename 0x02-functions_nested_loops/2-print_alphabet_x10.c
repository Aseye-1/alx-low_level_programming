#include "main.h"

/**
*print_alphabet_x10 - prints alphabet a-z ten times
*Return: prints a-z 10x
 */

void print_alphabet_x10(void)
{
	int k;
	int l;

	l = 0;

	while (l < 10)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		l++;
		_putchar('\n');
	}
}
