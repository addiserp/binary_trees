#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * @newNode: Pointer to the node to print
 * @n: value param
 * @left: left of the node
 * @right: right of the node
 *
 * Return: a new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
struct binary_tree_s *newNode = malloc(sizeof(struct binary_tree_s));
newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;
newNode->parent = parent;
return (newNode);
}
