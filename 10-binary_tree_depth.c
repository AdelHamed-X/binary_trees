#include "binary_trees.h"

/**
 * binary_tree_depth - measures he deptht of a node in a binary tree.
 *
 * @tree: a pointer to the root node
 *
 * Return: the depth of a node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
