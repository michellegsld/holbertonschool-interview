#include "sort.h"
void sort_arrays(int *array, int *new_array, int i, int j);
void merge_arrays(int *arr, size_t mid, size_t na, size_t j, int *a);
void copy(int *arr, int *temp, size_t size);

/**
 * merge_sort - Sorts an array of integers in ascending order
 * @array: Array with the values to sort
 * @size: Size of array
 */
void merge_sort(int *array, size_t size)
{
	int *new_array = malloc(sizeof(int) * size + 1);

	if (new_array == NULL)
		return;

	if (array == NULL || size < 2)
	{
		free(new_array);
		return;
	}

	sort_arrays(array, new_array, 0, size);
	free(new_array);
}

/**
 * sort_arrays - Actually does the sorting portion
 * @array: Array to sort
 * @new_array: Array to help with sorting
 * @start: Start of array
 * @end: End of array
 */
void sort_arrays(int *array, int *new_array, int start, int end)
{
	size_t mid = 0;

	if (end - start < 2)
		return;

	mid = (start + end) / 2;
	sort_arrays(array, new_array, start, mid);
	sort_arrays(array, new_array, mid, end);

	merge_arrays(array, mid, end, start, new_array);
}

/**
 * merge_arrays - Actually merges the two arrays
 * @arr: Array to sort
 * @mid: Midpoint of array
 * @end: Endpoint of array
 * @start: Startpoint of array
 * @temp: Temp working array to be sorted in
 */
void merge_arrays(int *arr, size_t mid, size_t end, size_t start, int *temp)
{
	size_t i = start, j = mid;
	size_t k = 0;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(&arr[start], mid - start);
	printf("[right]: ");
	print_array(&arr[mid], end - mid);

	for (k = start; k <= end; k++)
	{
		if (i < mid && (j >= end || arr[i] <= arr[j]))
		{
			temp[k] = arr[i];
			i++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
		}
	}
	copy(arr, temp, end);
	printf("[Done]: ");
	print_array(&arr[start], end - start);
}

/**
 * copy - Copy arrays
 * @arr: Array to copy to
 * @temp: Array to copy from
 * @size: Size of the array
 */
void copy(int *arr, int *temp, size_t size)
{
	size_t i = 0;

	for (i = 0; i <= size; i++)
		arr[i] = temp[i];
}
