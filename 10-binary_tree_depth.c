#include "binary_trees.h"

/**
 * binary_tree_depth - a function that determines the deoth of a binary tree
 * @tree: the root node
 *
 * Return: the depth of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		node_depth++;
		tree = tree->parent;
	}
	return (node_depth);

}
