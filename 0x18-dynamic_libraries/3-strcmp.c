#include "main.h"

/**
*_strcmp - string to compare
*@s1: first string
*@s2: second string
*Return: value of string
 */

int _strcmp(char *s1, char *s2)
{
	int b = 0;

	while (s1[b] - s2[b] == 0 && s1[b] != '\0')
	{
		b++;
	}
	return (s1[b] - s2[b]);
}
