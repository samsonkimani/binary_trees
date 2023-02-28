#include "binary_trees.h"

/**
 * binary_tree_is_root - a function to check if the node is the root
 * @node: the node to check if root
 *
 * Return: 1 if root and (0 otherwise and if null)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
