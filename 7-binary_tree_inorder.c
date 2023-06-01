#include "binary_trees.h"

/**
 * binary_tree_inorder - Inorder traversal of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to the function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
{
return;
}
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
