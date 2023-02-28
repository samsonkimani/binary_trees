#include "binary_trees.h"

/**
 * binary_tree_depth - a function that determines the deoth of a binary tree
 * @tree: the root node
 *
 * Return: the depth of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height_right = 1;
	size_t height_left = 1;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = 1 + binary_tree_depth(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_depth(tree->left);
	if (height_right > height_left)
		return (height_right);
	return (height_left);
}
