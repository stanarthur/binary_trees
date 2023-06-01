#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: A pointer to the root of the tree to delete.
 *
 * Description: This function deletes the entire binary
  *             tree rooted at @tree, nodes and data.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
{
return;
}
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
