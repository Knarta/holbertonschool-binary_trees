#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node:  pointer to the node to find the sibling
 *
 * Return: NULL if node is NULL or uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);


	if (node->parent->parent->right == node->parent)

		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
