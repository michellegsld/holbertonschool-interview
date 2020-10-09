#include "slide_line.h"

void move_zeros(int *line, size_t size, int direction);
void shift_line(int *line, size_t size, int direction);

/**
 * swap - Swaps two integers in an array
 * @line: The array
 * @a: First integer position
 * @b: Second integer position
 */
void swap(int *line, size_t a, size_t b)
{
	int temp = line[a];
	line[a] = line[b];
	line[b] = temp;
}

/**
 * slide_line - Slides and merges arrays of integers
 * @line: Pointer to an array of integers
 * @size: The number of elements in line
 * @direction: The direction to slide and merge
 * 
 * Return: 1 on success and 0 on failure
 */
int slide_line(int *line, size_t size, int direction)
{
	if (!line || (direction != 0 && direction != 1))
		return (0);
	
	if (size > 2) /* Is this rlly needed ? */
	{
		move_zeros(line, size, direction);
		shift_line(line, size, direction);
	}

	return (1);
}

/**
 * move_zeros - Moves all the zeros away from one side
 * @line: Array of integers
 * @size: The number of elements in line
 * @direction: Where to move zeros away from
 */
void move_zeros(int *line, size_t size, int direction)
{
	size_t i, j;

	/* Move zeros left */
	for (i = 0; i < size && direction == 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (line[j] > 0)
				swap(line, j, j + 1);

	/* Move zeros right */
	for (i = size - 1; i > 0 && direction == 0; i--)
		for (j = size - 1; j > 0; j--)
			if (line[j] > 0)
				swap(line, j, j - 1);
}

/**
 * merge_line - Merges duplicate numbers
 * @line: Array of integers
 * @size: The number of elements in line
 * @direction: Where to move zeros away from
 */
void shift_line(int *line, size_t size, int direction)
{
	size_t i;

	/* Merge neighbors to the left */
	for (i = 0; i < size - 1 && direction == 0; i++)
	{
		if (line[i] == line[i + 1])
		{
			line[i] += line[i + 1];
			line[i + 1] = 0;
		}
	}

	/* Merge neighbors to right */
	for (i = size - 1; i > 0 && direction == 1; i--)
	{
		if (line[i] == line[i - 1])
		{
			line[i] += line[i - 1];
			line[i - 1] = 0;
		}
	}

	move_zeros(line, size, direction);
}
