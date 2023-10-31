#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the
 * lowest common ancestor of two nodes
 * @first: First node
 * @second: Second node
 * Return: the ancestor of the node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *p, *j;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	p = first->parent;
	j = second->parent;
	if (p == NULL || first == j || (!p->parent && j))
	{
		return (binary_trees_ancestor(first, j));
	}
	else if (j == NULL || p == second || (!j->parent && p))
	{
		return (binary_trees_ancestor(p, second));
	}
	return (binary_trees_ancestor(p, j));
}
