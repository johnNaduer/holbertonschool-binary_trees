#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *child_r;

child_r = malloc(sizeof(binary_tree_t));
if(child_r==NULL)
{
return (NULL);
}

child_r->n=value;
child_r->parent=parent;
child_r->left = NULL;
child_r->right = NULL;

if(parent->left==NULL)
{
parent->left=child_r;
}
else
{
child_r->right = parent->right;
parent->right->parent = child_r;
parent->right=child_r;
}

return (child_r);
}
