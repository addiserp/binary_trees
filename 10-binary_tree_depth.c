#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures
 * the depth of a binary tree.
 *
 * @tree: given node
 *
 * Return: level.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
int countp = 0;
if (tree == NULL)
{
return (0);
}

if (tree->parent)
{
countp = 1 + binary_tree_depth(tree->parent);
}
return (countp);
}
