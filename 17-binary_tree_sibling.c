#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node.
 *         NULL if node is NULL, the parent is NULL,
 *          or the node has no siblings.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!(node) || !(node->parent))
{
return (NULL);
}
if (node == node->parent->left)
{
return (node->parent->right);
}
return (node->parent->left);
}
