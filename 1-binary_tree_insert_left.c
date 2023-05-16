#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: parent membrer
 * @value: value of members
 * Return: Node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/*chack if parent is NULL*/
	if (parent != NULL)
	{
		/* Allocate memory for new node */
		node = malloc(sizeof(binary_tree_t));

		if (node == NULL)
		{
			return (NULL);
		}

		/* Initialize node's members */

		node->n = value;
		node->parent = parent;
		node->left = NULL;

		if (parent->left != NULL)
		{
			parent->left->parent = node;
			node->left = parent->left;
		}

		parent->left = node;

		return (node);
	}

	return (0);
}
