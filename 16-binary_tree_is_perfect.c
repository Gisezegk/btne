#include "binary_trees.h"

/**
 * binary_tree_is_full - Write a function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) &&
					binary_tree_is_full(tree->right));
		return (0);
	}
	return (0);
}

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

/**
 * binary_tree_is_perfect - Write a funct that check if a binary tree is perfec
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (binary_tree_height(tree->left) ==
		binary_tree_height(tree->right) && (binary_tree_size(tree->left)
		== binary_tree_size(tree->right))))
		return (1);
	return (0);
}













