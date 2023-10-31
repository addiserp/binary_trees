#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds
 * the sibling of a node
 * if a binary tree is perfect
 *
 * @tree: given node
 *
 * Return: None.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
