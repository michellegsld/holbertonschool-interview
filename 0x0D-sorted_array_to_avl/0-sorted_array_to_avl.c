#include "binary_trees.h"

avl_t *create_avl(int *array, avl_t *parent_node, int first, int last);

/**
 * sorted_array_to_avl - Creates an AVL tree from a sorted array
 * @array: The original array to create the AVL from
 * @size: The number of elements in the array
 *
 * Return: Either a pointer to the root node or NULL on failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (!array || size < 1)
		return (NULL);

	return (create_avl(array, NULL, 0, size - 1));
}

/**
 * create_avl - Recursive function that creates each node in the AVL tree
 * @array: The original array
 * @parent_node: The node before the current one to be made
 * @start: The index in which to first look at when creating the node
 * @end: The last index in the array, which tells the function when to stop
 * 
 * Return: The pointer to the root node or NULL to end the recursion
 */
avl_t *create_avl(int *array, avl_t *parent_node, int start, int end)
{
	avl_t *new_node;
	int mid = (start + end) / 2;

	if (start > end)
		return (NULL);

	new_node = malloc(sizeof(avl_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = array[mid];
	new_node->parent = parent_node;

	new_node->left = create_avl(array, new_node, start, mid - 1);
	new_node->right = create_avl(array, new_node, mid + 1, end);

	return (new_node);
}
