#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 *
 * @node: a pointer ot the root node.
 *
 * Return: a pointer to the uncle node, (NULL) otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent &&
			node->parent->parent->right &&
			node->parent->parent->left)
	{
		return (check_node_position(node->parent));
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
