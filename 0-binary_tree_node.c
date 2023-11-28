#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: a pointer to the parent node
 * @value: the node value
 *
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->right = NULL;
	new->left = NULL;
	new->n = value;
	new->parent = parent;

	return (new);
}