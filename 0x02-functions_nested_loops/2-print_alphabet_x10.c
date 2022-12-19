#include "main.h"

/**
*main - Entry point
*Return: 0 (Success)
*
 */

int main(void)
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
