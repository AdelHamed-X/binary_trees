#include "binary_trees.h"

/**
 * binary_tree_size - measures the height of a binary tree
 *
 * @tree: a pointer to the root node
 *
 * Return: the heihgt of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size += 1;
		size += binary_tree_size(tree->right);
		size += binary_tree_size(tree->left);
	}

	return (size);
}
