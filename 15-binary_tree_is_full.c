#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0;
	int right_full = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	
	if (tree->left && tree->right)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);

		if (left_full == 1 && right_full == 1)
			return (1);
	}
	return (0);
}
