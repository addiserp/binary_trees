#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks
 * if a binary tree is perfect
 *
 * @tree: given node
 *
 * Return: None.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
int countl = 0, countr = 0;

if (tree->left && tree->right)
{
countl = 1 + tree_is_perfect(tree->left);
countr = 1 + tree_is_perfect(tree->right);
if (countr == countl && countr != 0 && countl != 0)
return (countr);
return (0);
}
else if (!tree->left && !tree->right)
{
return (1);
}
else
{
return (0);
}
}

/**
* binary_tree_is_perfect - perfect or not a tree
* @tree: tree to check
* Return: 1 is it is or 0 if not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int checks = 0;

if (tree == NULL)
{
return (0);
}
else
{
checks = tree_is_perfect(tree);
if (checks != 0)
{
return (1);
}
return (0);
}
}
