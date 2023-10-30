#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 *
 * @node: given node
 *
 * Return: 1 if node is Leaf.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
else
{
if (node->parent == NULL)
{
return (1);
}
else
{
return (0);
}
}

}
