#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another one
 * @parent: pointer to te node to insert the tight child in
 * @value: value to store in the new node
 * Return: node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	/*check if parent is NULL*/
	if (parent != NULL)
	{
		/* alloc memory for new node*/

		node = malloc(sizeof(binary_tree_t));

		if (node == NULL)
		{
			return (NULL);
		}

		/* Inicialize node's members*/

		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;

		/* Set parent's right child */
		if (parent->right != NULL)
		{

		parent->right->parent = node;
		node->right = parent->right;
		}
		parent->right = node;
		return (node);
	}
	return (0);
}
