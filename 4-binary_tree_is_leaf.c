#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Deletes a binary tree node.
 *
 * @node: given node
 *
 * Return: 1 if node is Leaf.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
else
{
if (node->left == NULL && node->right == NULL)
{
return (1);
}
else
{
return (0);
}
}
}
