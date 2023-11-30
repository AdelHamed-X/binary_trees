#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 *
 * @node:  pointer ot the root node.
 *
 * Return:  pointer to the sibling node, (NULL) otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent && node->parent->right && node->parent->left)
	{
		return (check_node_position(node));
	}
	return (NULL);
}

/**
 * check_node_position - checks if the node is on right or left
 *
 * @tree: a node
 *
 * Return: a pointer to the sibling node or NULL
 */
binary_tree_t *check_node_position(binary_tree_t *tree)
{
	if (tree->parent->right->n == tree->n)
		return (tree->parent->left);
	return (tree->parent->right);
}
