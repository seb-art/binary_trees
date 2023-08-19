#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal
 *				recursion
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * if `tree` or `func` is NULL, it does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	/* visit root node, call func */
	func(tree->n);
}
