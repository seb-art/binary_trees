#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *			recursively
 *
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* if tree is NULL, do nothing */
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

/*
* iterative alternative:
* simulates a post-order traversal of the binary tree

* void binary_tree_delete(binary_tree_t *tree)
*{
*	binary_tree_t *current, *tmp;
*
*	if (tree == NULL)
*		return;
*
*	current = tree;
*	while (current != NULL)
*	{
*		if (current->left == NULL)
*		{
*			tmp = current->right;
*			free(current);
*			current = tmp;
*		}
*		else
*		{
*			tmp = current->left;
*			current->left = tmp->right;
*			tmp->right = current;
*			current = tmp;
*		}
*	}
*}
*/
