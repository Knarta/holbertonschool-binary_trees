#include "binary_trees.h"

/**
 * binary_tree_preorder - go through a binary tree using pre-order traversal
 * @tree : pointer to the root node of the tree to traverse
 * @func : pointer function to call for each node
 *
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
