#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent : pointeur which point adress parent
 * @value : value create the node
 *
 * Return: NULL is fail and create the node left
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = binary_tree_node(NULL, value);

	if (left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = left_node;
		left_node->left = parent->left;
	}


	parent->left = left_node;
	left_node->parent = parent;

	return (left_node);
}
