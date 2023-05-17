#include "binary_trees.h"
/**
 * binary_tree_balance - find the balance factor of a binary tree
 * @tree: imput node
 * Return: returns the balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	size_t t = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			left = binary_tree_height(tree->left);
			right = binary_tree_height(tree->right);
			if (tree->left)
			{
				left++;
			}
			if (tree->right)
			{
				right++;
			}

			t = left - right;
			return (t);
		}

	else if ((tree->left && !tree->right) && (!tree->left && tree->right))
	{
		return (-1);
	}

}

	return (0);
}
/**
 * binary_tree_height - find and return the height of the tree
 * @tree: head node
 * Return: return the height of the tree
 *
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
