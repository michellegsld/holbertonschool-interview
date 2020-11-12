#include "search.h"

/**
 * linear_skip - To find a specific value in a sorted skip list of ints.
 * @list: Pointer to head of list to search.
 * @value: The value to search for.
 *
 * Return: The pointer to the value or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *skip = NULL, *temp = NULL;

	if (!list)
		return (NULL);

	skip = list->express;
	temp = list;

	while (skip)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			skip->index, skip->n);

		if (skip->express == NULL || skip->n >= value)
		{
			if (skip->express == NULL && skip->n < value)
			{
				temp = skip;
				while (skip->next)
					skip = skip->next;
			}

			printf("Value found between indexes [%lu] and [%lu]\n",
				temp->index, skip->index);

			while (temp)
			{
				printf("Value checked at index [%lu] = [%d]\n",
					temp->index, temp->n);
				if (temp->n == value)
					return (temp);
				temp = temp->next;
			}
		}

		temp = skip;
		skip = skip->express;
	}

	return (NULL);
}
