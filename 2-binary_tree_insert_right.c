#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of another node.
 *
 * @parent: a pointer to the newely inserted node
 * @value: the new node value
 *
 * Return: a pointer to the newely created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
