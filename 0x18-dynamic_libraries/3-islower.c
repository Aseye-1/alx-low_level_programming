#include "main.h"

/**
*_islower - Is a function that checks lowercase character
*@c: character
*Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
