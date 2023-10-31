#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a binary tree
 *
 * @tree: given node
 *
 * Return: balance.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
size_t balance = 0;
size_t countl = 0;
size_t countr = 0;

if (tree)
{
countl = ((int)binary_tree_height(tree->left));
countr = ((int)binary_tree_height(tree->right));
balance = countr - countl;
}
return (balance);
}
