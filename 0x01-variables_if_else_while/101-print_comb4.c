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
	int o;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			for (o = 0; o <= 9; o++)
			{
				if (m > n && n > o)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
					if (m != 7 || n != 8 || o != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
