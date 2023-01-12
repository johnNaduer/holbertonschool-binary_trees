#include "binary_trees.h"
/**
  * binary_tree_insert_left - insert a node as a left child
  * @parent: The parent node
  * @value: Value of the node
  * Return: pointer to the node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_child;

	if (!parent)
		return (NULL);
	l_child = malloc(sizeof(binary_tree_t));
	if (!l_child)
		return (NULL);
	l_child->n = value;
	l_child->parent = parent;
	l_child->left = NULL;
	l_child->right = NULL;
	if (parent->left == NULL)
		parent->left = l_child;
	else
	{
		l_child->left = parent->left;
		parent->left->parent = l_child;
		parent->left = l_child;
	}
	return (l_child);
}
