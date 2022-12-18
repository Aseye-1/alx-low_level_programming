#include "main.h"

/**
*main - Prints putchar
*Return: 0 (Success)
*
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);

		c++;
	}
	_putchar('\n');

	return (0);
}
