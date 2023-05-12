#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function that create a binary tree node
 * @parent: node member
 * @value: value of members
 * Return: node
 * 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    /* Allocate memory for new node */
    node = malloc(sizeof(binary_tree_t));
    if (node == NULL) {
        return (NULL);
    }

    /* Initialize node's members */
    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return (node);
}
