#include "binary_trees.h"

/**
 * binary_tree_preorder - Print in preorder format.
 *
 * @tree: given node
 * @func: function for printing.
 *
 * Return: None.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
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
