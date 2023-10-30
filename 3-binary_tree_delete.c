#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree node.
 *
 * @tree: tree of the node
 *
 * Return: a new node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}
else
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
}

free(tree);
}
}