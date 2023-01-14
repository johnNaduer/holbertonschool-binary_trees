#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to node to measure depth
 *
 * Return: Depth of binary tree, 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	size_t left_depth = binary_tree_depth(tree->left);
	size_t right_depth = binary_tree_depth(tree->right);

	return (1 + (left_depth > right_depth ? left_depth : right_depth));
}
