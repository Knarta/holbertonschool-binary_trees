#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count number leaves
 *
 * Return: number leaves and 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);

	return (count_left + count_right);
}
