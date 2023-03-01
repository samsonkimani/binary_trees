#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that returns nodes with atleast one child
 * @tree: the root node
 *
 * Return: the number of nodes with atleast one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - a function that returns the size of a binary tree
 * @tree: the root node
 *
 * Return: the number of nodes in the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_leaves - a function to determine the number of leaves in a tree
 * @tree: the root node
 *
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
