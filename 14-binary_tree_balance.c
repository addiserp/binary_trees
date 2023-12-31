#include "binary_trees.h"

/**
 * binary_tree_height_2 - a function that measures
 * the height of a binary tree.
 *
 * @tree: given node
 *
 * Return: None.
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{
size_t countl = 0;
size_t countr = 0;

if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
countl = tree->left ? 1 + binary_tree_height_2(tree->left) : 1;
countr = tree->right ? 1 + binary_tree_height_2(tree->right) : 1;
}
if (countl > countr)
{
return (countl);
}
else
{
return (countr);
}
}
}
/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 *
 * @tree: given node
 *
 * Return: balance.
 */
int binary_tree_balance(const binary_tree_t *tree)
{

int balance = 0;
int countl = 0;
int countr = 0;

if (tree)
{
countl = ((int)binary_tree_height_2(tree->left));
countr = ((int)binary_tree_height_2(tree->right));
balance = countl - countr;
}
return (balance);
}
