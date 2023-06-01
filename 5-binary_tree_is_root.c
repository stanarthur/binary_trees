#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is the root, returns 1.
 *         Otherwise, returns 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
{
return (0);
}
else
{
return (1);
}

}
