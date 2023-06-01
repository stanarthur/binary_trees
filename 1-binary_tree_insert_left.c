#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left child of a given node.
 * @parent: A pointer to the node to insert the left child.
 * @value: The value to store in the new node.
 *
 * Return: On success, returns a pointer to the newly created node.
 *         On failure or if an error occurs, returns NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
if (parent == NULL)
return (NULL);
newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);
newNode->n = value;
newNode->parent = parent;
newNode->left = parent->left;
newNode->right = NULL;
parent->left = newNode;
if (newNode->left)
newNode->left->parent = newNode;

return (newNode);
}
