#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that prints the binary in postorder
 * @tree: the root node
 * @func: a function pointer
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
