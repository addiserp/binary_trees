#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the
 * nodes with at least 1 child in a binary tree
 *
 * @tree: given node
 *
 * Return: size.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t size = 0;
size_t countl = 0;
size_t countr = 0;

if (tree == NULL)
{
return (0);
}
else
{
countl = binary_tree_nodes(tree->left);
countr = binary_tree_nodes(tree->right);
size = countl + countr;
if (tree->left == NULL && tree->right)
{
return (1 + size);
}
else if (tree->right == NULL && tree->left)
{
return (1 + size);
}
else if (tree->right && tree->left && tree->parent == NULL)
{
return (1 + size);
}
else
{
return (size);
}
}
}
