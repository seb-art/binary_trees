#include "binary_trees.h"

/**
 * binary_tree_sibling - looks up the sibling of a node
 * @node: (pointer) the node to find the sibling of;
 *
 * Return: pointer to the sibling node
 *	or NULL if sibling is None
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
