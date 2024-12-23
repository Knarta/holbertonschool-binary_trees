#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent : pointeur which point adress parent
 * @value : value create the node
 *
 * Return: the create the tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
