#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node : pointeur pointer to the node to check
 *
 * Return: 0 if node NULL or not leaf, 1 if leaf tree
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
