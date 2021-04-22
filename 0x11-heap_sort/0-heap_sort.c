#include "sort.h"

void heap_work(int *array, int first, int second, size_t size);
void heap_swap(int *array, int *swap1, int *swap2, size_t size);

/**
 * heap_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void heap_sort(int *array, size_t size)
{
	size_t i;

	if (!array)
		return;

	for (i = size / 2; i > 0; i--)
		heap_work(array, size, i - 1, size);

	for (i = size - 1; i > 0; i--)
	{
		heap_swap(array, &array[0], &array[i], size);
		heap_work(array, i, 0, size);
	}
}

/**
 * heap_work - Does the main work of going through and sorting
 * @array: The array to be sorted
 * @first: The first element to be compared
 * @second: The second element to be compared
 * @size: Number of elements in the array
 */
void heap_work(int *array, int first, int second, size_t size)
{
	int max = second;
	int left = 2 * second + 1;
	int right = 2 * second + 2;

	if (left < first && array[left] > array[max])
		max = left;

	if (right < first && array[right] > array[max])
		max = right;

	if (max != second)
	{
		heap_swap(array, &array[second], &array[max], size);
		heap_work(array, first, max, size);
	}
}

/**
 * heap_swap - Swaps two elements of an array and prints the result
 * @array: The array to be sorted
 * @swap1: The first element to be swapped
 * @swap2: The second element being swapped
 * @size: Number of elements in the array
 */
void heap_swap(int *array, int *swap1, int *swap2, size_t size)
{
	int temp = *swap1;
	*swap1 = *swap2;
	*swap2 = temp;
	print_array(array, size);
}
