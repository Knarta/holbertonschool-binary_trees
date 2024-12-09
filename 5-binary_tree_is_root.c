#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node : pointeur pointer to the node to check
 *
 * Return: 0 if node NULL or not root, 1 if root tree
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
