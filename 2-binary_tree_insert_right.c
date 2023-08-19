#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node
 *	as the right child of another node
 *
 * @parent: pointer to the node to insert the right child in
 * @value: data value to store in the new node
 *
 * Return: pointer to right node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bin_node;

	if (parent == NULL)
		return (NULL);

	bin_node = binary_tree_node(parent, value);
	if (bin_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		bin_node->right = parent->right;
		parent->right->parent = bin_node;
	}
	parent->right = bin_node;

	return (bin_node);
}
