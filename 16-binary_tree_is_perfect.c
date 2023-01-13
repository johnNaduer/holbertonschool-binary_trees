#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree) 
{
    if (!tree) return 0;
    int left_depth = binary_tree_depth(tree->left);
    int right_depth = binary_tree_depth(tree->right);
    if (left_depth != right_depth) return 0;
    if (!tree->left && !tree->right) return 1;
    if (!tree->left || !tree->right) return 0;
    return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
}
