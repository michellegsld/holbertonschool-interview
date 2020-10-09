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

	if (direction == 0)
	{
		*left = line[0];
		*right = line[1];
		i = 1;

		while (right && i < size)
		{
			if (left == 0)
			{
				*left = *right;
				*right = 0;
			}
			else if (*left == *right)
			{
				*left = *left + *right;
				*right = 0;
			}

			i++;
			*left = *right;
			*right = line[i];
		}
	}
	else
	{
		*right = line[size - 1];
		*left = line[size - 2];
		i = size - 2;

		while (left && i > 0)
		{
			if (right == 0)
			{
				*right = *left;
				*left = 0;
			}
			else if (*right == *left)
			{
				*right = *right + *left;
				*left = 0;
			}

			i--;
			*right = *left;
			*left = line[i];
		}
	}

	return (1);
}
