#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: (pointer) the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 if non-perfect
 *		If tree is NULL, returns 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int len_left, len_right;

	if (tree == NULL)
		return (0);


	/* init left and right heights; */
	len_left = binary_tree_height(tree->left);
	len_right = binary_tree_height(tree->right);

	if (len_left == len_right)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		/* return perfect bin_tree */
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - measure the height of a bin_tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t len_left, len_right;

	if (tree == NULL)
		return (0);

	len_left = binary_tree_height(tree->left);
	len_right = binary_tree_height(tree->right);

	/*
	 * ternary operator condition ? expr1 : expr2 check.
	 * if left height > right height and if it evaluates to true,
	 *	returns len_left, else returns len_right(right height)
	 * either result is added to 1 and,
	 *	returned as the final height of the tree.
	 */
	return (1 + (len_left > len_right ? len_left : len_right));
}
