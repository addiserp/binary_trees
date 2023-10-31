#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures
 * the size of a binary tree.
 *
 * @tree: given node
 *
 * Return: size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
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
countl = binary_tree_size(tree->left);
countr = binary_tree_size(tree->right);
size = 1 + countl + countr;
}
return (size);
}
