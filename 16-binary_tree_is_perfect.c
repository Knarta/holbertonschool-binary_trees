#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * is_perfect_recursive - function recursive
 * @tree: pointer to the node of the tree to check
 * @cur_D: calculate the depth
 * @max_H: maximum heigt of the binary tree
 * Return: 0 if tree is NULL or 1 if equal
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t cur_D, size_t max_H)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{

		if (cur_D == max_H)
			return (1);
		else
			return (0);
	}
	left_height = is_perfect_recursive(tree->left, cur_D + 1, max_H);

	right_height = is_perfect_recursive(tree->right, cur_D + 1, max_H);

	if (left_height &&  right_height)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or res if the check is perfect tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res;
	size_t max_height = 0;

	if (!tree)
		return (0);

	max_height = binary_tree_height(tree);

	res = is_perfect_recursive(tree, 0, max_height);

	return (res);
}
