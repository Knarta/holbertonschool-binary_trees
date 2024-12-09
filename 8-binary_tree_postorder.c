#include "binary_trees.h"

/**
 * binary_tree_postorder - go through a binary tree using pre-order traversal
 * @tree : pointer to the root node of the tree to traverse
 * @func : pointer function to call for each node
 *
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	func(tree->n);
	binary_tree_postorder(tree->right, func);
}
