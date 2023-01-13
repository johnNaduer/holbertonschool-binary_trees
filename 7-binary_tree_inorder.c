#include "binary_trees.h"

<<<<<<< HEAD
/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func:Pointer to a function to call for each node
 *
 * Value in the node must be passed as a function parameter
 * Do nothing if tree or func NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
=======
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)) 
{
    if (!tree || !func) return;

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
>>>>>>> 4b05a4415e0c60865e74006e23c4c43a6c9ced40
}
