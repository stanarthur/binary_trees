#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Pointer to the binary tree to measure.
 *
 * Return: The depth of the tree.
 *         0 if the tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
