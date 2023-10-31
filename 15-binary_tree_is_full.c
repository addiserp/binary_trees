#include "binary_trees.h"

/**
 * binary_tree_is_full -  a function that checks
 * if a binary tree is full
 *
 * @tree: given node
 *
 * Return: None.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int countl = 0, countr = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			countl = binary_tree_is_full(tree->left);
			countr = binary_tree_is_full(tree->right);
			if (countl == 0 || countr == 0)
			{
				return (0);
			}
			return (1);
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
}
