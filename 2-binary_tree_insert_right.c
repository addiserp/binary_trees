#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a binary tree node.
 *
 * @parent: partent of the node
 * @value: value of the node
 *
 * Return: a new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}

binary_tree_t *newNode;
newNode = binary_tree_node(parent, value);
if (newNode == NULL)
{
return (NULL);
}
if (parent->right != NULL)
{
newNode->right = parent->right;
parent->right->parent = newNode;
}
parent->right = newNode;
return (newNode);
}
