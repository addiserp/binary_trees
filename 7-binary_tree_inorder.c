#include "binary_trees.h"
/**
 * binary_tree_inorder - Print in in-order format.
 *
 * @tree: given node
 * @func: function for printing.
 *
 * Return: None.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
return;
}

/**
 * func - print value.
 *
 * @n: given value
 *
 * Return: None.
 */

void func(int n)
{
printf("%d\n", n);
}
