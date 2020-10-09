#include "menger.h"

/**
 * menger - Draws a 2D Menger Sponge
 * @level: What level of the Menger Sponge to draw
 */
void menger(int level)
{
	int i = 0, j = 0, x = 0, y = 0, size = pow(3, level);
	char print;

	if (level < 0)
		return;

	if (level == 0)
	{
		printf("#\n");
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			x = i;
			y = j;
			print = '#';

			while (y)	/* This can be x, x || y, y, x && y */
			{
				if (x % 3 == 1 && y % 3 == 1)
					print = ' ';
				x = x / 3;
				y = y / 3;
			}
			printf("%c", print);
		}
		printf("\n");
	}
}
