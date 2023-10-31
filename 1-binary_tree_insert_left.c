#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a binary tree node.
 *
 * @parent: partent of the node
 * @value: value of the node
 *
 * Return: a new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
if (parent == NULL)
{
return (NULL);
}

newNode = binary_tree_node(parent, value);
if (newNode == NULL)
{
return (NULL);
}
if (parent->left != NULL)
{
newNode->left = parent->left;
parent->left->parent = newNode;
}
parent->left = newNode;
return (newNode);
}
