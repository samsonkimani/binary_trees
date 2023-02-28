#include "binary_trees.h"

/**
 * binary_tree_height - a function that returns the height of a binary tree
 * @tree: the root node
 *
 * Return: the height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
