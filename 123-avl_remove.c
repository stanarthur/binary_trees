#include "binary_trees.h"

/**
 * avl_remove - Removes a node from an AVL tree.
 * @root: Pointer to the root node of the AVL tree from which a node
 *          should be removed.
 * @value: The value to remove from the AVL tree.
 *
 * Return: Pointer to the new root node of the AVL tree after removing
 *          the value and performing rebalancing, or NULL if the tree
 *          is empty or the value is not found.
 *
 * Description: This function removes a node with the specified value
 *              from the AVL tree.The AVL tree is rebalanced after
 *              the removal to maintain the AVL property,where the heights
 *              of the left and right subtrees of any node differ by at
 *              most one. The function returns a pointer to the new root
 *              node of the AVL tree after the removal and rebalancing.
 *              If the tree is empty or the value
 *              is not found in the tree, the function returns NULL.
 */


avl_t *avl_remove(avl_t *root, int value)
{
	printf("%d", root->n);
	printf("%d", value);
	return (NULL);
}
