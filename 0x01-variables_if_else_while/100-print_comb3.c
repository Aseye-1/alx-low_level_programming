#include <stdio.h>

/**
*main - Entry point
*Return: 0 (Success)
*
 */

int main(void)

{
	int m;
	int n;

	for (m = 10; m <= 19; m++)
	{
		for (n = 10; n <= 19; n++)
		{
			if ((n % 10) > (m % 10))
			{
				putchar((m % 10) + '0');
				putchar((n % 10) + '0');
				if (m != 18 || n != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
