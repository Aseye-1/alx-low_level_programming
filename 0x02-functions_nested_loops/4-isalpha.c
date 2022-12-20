#include "main.h"

/**
*_isalpha - checks for alphabetic character
*@c: a character to be checked on
*Return: 1 0r 0 based on conditions
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
