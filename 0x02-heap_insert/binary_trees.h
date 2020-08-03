#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdlib.h>
#include <stddef.h>		/* Used for printing the binary trees */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s heap_t;

/* 0-binary_tree_node.c */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* 1-heap_insert.c */
heap_t *heap_insert(heap_t **root, int value);
/* binary_tree_print.c */
void binary_tree_print(const binary_tree_t *);	/* Not required for checker */

#endif /* BINARY_TREES_H */
