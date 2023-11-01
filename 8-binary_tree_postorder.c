#include "binary_trees.h"

/**
 * binary_tree_postorder - Print in post-order format.
 *
 * @tree: given node
 * @func: function for printing.
 *
 * Return: None.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
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
