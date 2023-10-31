#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that measures
 * the size of a binary tree.
 *
 * @tree: given node
 *
 * Return: size.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
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
countl = binary_tree_leaves(tree->left);
countr = binary_tree_leaves(tree->right);
size = countl + countr;
if (tree->left == NULL && tree->right == NULL)
{
return (1 + size);
}
else
{
return (size);
}
}
}
