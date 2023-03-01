#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that returns the uncle of a node
 * @node: the node to find the uncle to
 *
 * Return: return the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
