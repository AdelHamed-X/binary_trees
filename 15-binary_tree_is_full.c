#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if  node is full.
 *
 * @tree: the root node.
 *
 * Return: 1 if a node is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left && !(tree->right)) || (!(tree->left) && tree->right))
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
