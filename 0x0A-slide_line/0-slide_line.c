#include "slide_line.h"

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
	size_t i;
	int *left;
	int *right;

	if (!line || (direction != 0 && direction != 1) || size < 2)
		return (0);

	for (i = 1; direction == 0 && i < size; i++)
	{
		left = &line[i - 1];
		right = &line[i];

		if (*left == 0)
		{
			line[i - 1] = line[i];
			line[i] = 0;
		}
		else if (*left == *right)
		{
			line[i - 1] = line[i - 1] + line[i];
			line[i] = 0;
		}
	}

	for (i = size - 2; direction == 1 && i > 0; i--)
	{
		right = &line[i + 1];
		left = &line[i];

		if (*right == 0)
		{
			line[i + 1] = line[i];
			line[i] = 0;
		}
		else if (*right == *left)
		{
			line[i + 1] = line[i + 1] + line[i];
			line[i] = 0;
		}
	}

	return (1);
}
