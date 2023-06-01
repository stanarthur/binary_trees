#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the right child of a given node.
 * @parent: A pointer to the node to insert the right child.
 * @value: The value to store in the new node.
 *
 * Return: On success, returns a pointer to the newly created node.
 *         On failure or if an error occurs, returns NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (parent == NULL)
return (NULL);
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);
new->n = value;
new->parent = parent;
new->left = NULL;
new->right = parent->right;
parent->right = new;
if (new->right)
new->right->parent = new;

return (new);
}
