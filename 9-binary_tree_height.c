#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures
 * the height of a binary tree.
 *
 * @tree: given node
 *
 * Return: None.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int countl = 0;
int countr = 0;
if (tree == NULL)
{
return (0);
}

if (tree->left)
{
countl = 1 + binary_tree_height(tree->left);
}
else
{
return (countl);
}

if (tree->right)
{
countr = 1 + binary_tree_height(tree->right);
}
else
{
return (countr);
}

if (countl > countr)
{
return (countl + 1);
}
else
{
return (countr + 1);
}
}
