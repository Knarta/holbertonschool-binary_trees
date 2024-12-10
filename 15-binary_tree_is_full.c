#include "binary_trees.h"

/**
 * binary_tree_is_full - function that measures the height of a binary tree.
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 is fill or 0 otherwise
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

		return (left_full && right_full);
	}
	return (0);
}
