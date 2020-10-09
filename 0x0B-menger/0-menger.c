#include "menger.h"

/**
 * menger - Draws a 2D Menger Sponge
 * @level: What level of the Menger Sponge to draw
 */
void menger(int level)
{
	if (level < 0)
		return;

	if (level == 0)
	{
		printf("#\n");
		return;
	}
}
