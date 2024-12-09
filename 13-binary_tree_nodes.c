#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: the count the number node, 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count_R = 0;
	size_t node_count_L = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	node_count_L = binary_tree_nodes(tree->left);
	node_count_R = binary_tree_nodes(tree->right);

	return (node_count_L + node_count_R + 1);
}
