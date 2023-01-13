#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree) 
{
    if (!tree) return 0;
    size_t left_depth = binary_tree_depth(tree->left);
    size_t right_depth = binary_tree_depth(tree->right);
    return 1 + (left_depth > right_depth ? left_depth : right_depth);
}
