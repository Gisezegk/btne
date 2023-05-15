#include "binary_trees.h"

/**
 * binary_tree_height - Write a funct that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			left = binary_tree_height(tree->left);
			right = binary_tree_height(tree->right);

			if (left >= right)
				return (left + 1);
			else
				return (right + 1);
		}
	}
	return (0);
}
