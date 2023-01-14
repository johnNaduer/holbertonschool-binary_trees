#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right_child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child_r;

	if (!parent)
	{
		return (NULL);
	}

	child_r = malloc(sizeof(binary_tree_t));

	if (child_r == NULL)
	{
		return (NULL);
	}

	child_r->n = value;
	child_r->parent = parent;
	child_r->left = NULL;
	child_r->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = child_r;
	}

	else
	{
		child_r->right = parent->right;
		parent->right->parent = child_r;
		parent->right = child_r;
	}
	return (child_r);
}
