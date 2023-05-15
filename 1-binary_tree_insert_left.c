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
	binary_tree_t *node, *tmp;

	/*chack if parent is NULL*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for new node */
	node = malloc(sizeof(binary_tree_t));
	if
		(node == NULL)
	{
		return (NULL);
	}

	/* Initialize node's members */

	node->n = value;
	node->parent = parent;
	node->left = NULL;

	/* Set parent's left-child */
	if (parent->left != NULL)
	{
		tmp = parent->left;
		parent->left = node;
		node->left = tmp;
		tmp->parent = node;
	}
	else
	{
		parent->left = node;
	}
	return (node);
}
