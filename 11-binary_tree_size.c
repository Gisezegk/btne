#include "binary_trees.h"

/**
 * binary_tree_size - Write a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree)
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		return (left + right + 1);
	}
	return (0);
}
