#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to parent node of node being created
 * @value: Value to be stored in new node
 *
 * Return: Pointer to new node, NULL on fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->parent = parent;
	node->left = node->right = NULL;

	return (node);
}
