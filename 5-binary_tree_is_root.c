#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if given node is a root
 * @node: Pointer to node being checked
 *
 * Return: 1 if node is root, 0 if NULL or not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
