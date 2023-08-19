#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left child of a node
 * @parent: pointer to the node to insert the left child in
 * @value: data value to store in the new node
 *
 * Return: pointer to the created node,
 *		or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bin_node;

	if (parent == NULL)
		return (NULL);

	/* create node with a parent */
	bin_node = binary_tree_node(parent, value);
	if (bin_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		bin_node->left = parent->left;
		parent->left->parent = bin_node;
	}

	parent->left = bin_node;

	return (bin_node);
}
