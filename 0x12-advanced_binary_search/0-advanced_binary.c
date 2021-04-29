#include "search_algos.h"

int simple_binary(int *array, size_t left, size_t right, int value);
void print_binary(int *array, size_t left, size_t right);

/**
 * advanced_binary - Searches for a value in a sorted array of ints
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: the value to search for
 *
 * Return: -1 or the value to search for
 */
int advanced_binary(int *array, size_t size, int value)
{
	int answer = -1;

	if (array && size > 0)
		answer = simple_binary(array, 0, size - 1, value);

	return (answer);
}

/**
* simple_binary - The actual search part of advanced_binary
* @array: Pointer to the first element of the array to search in
* @left: The value of the first number
* @right: The value of the second number
* @value: The answer we are looking for
*
* Return: -1 or the index the value was found at
*/
int simple_binary(int *array, size_t left, size_t right, int value)
{
	int answer;

	if (left <= right)
	{
		print_binary(array, left, right);
		answer = left + (right - left) / 2;

		if (left == right)
			return (-1);

		if (array[answer] == value && array[answer - 1] != value)
		{
			print_binary(array, left, right);
			return (answer);
		}

		if (array[answer] >= value)
			return (simple_binary(array, left, answer, value));
		return (simple_binary(array, answer + 1, right, value));
	}
	return (-1);
}

/**
* print_binary - Prints the array
* @array: The array to print
* @left: The value of the first number
* @right: The value of the second number
*/
void print_binary(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");

	while (left <= right)
	{
		printf("%d", array[left]);

		if (left != right)
			printf(", ");
		left++;
	}
	printf("\n");
}
