i#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to node being checked
 *
 * Return: 1 if leaf, otherwise 0 if not or NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->right == NULL && node->left == NULL)

	{
		return (1);
	}

	else
	{
		return (0);
	}
}
