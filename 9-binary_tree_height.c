#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * 
 * @tree: a pointer to the root node
 * 
 * Return: the heihgt of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t right_depth, left_depth;
        
        if (tree == NULL)
                return (0);

        right_depth = binary_tree_height(tree->right);
        left_depth = binary_tree_height(tree->left);

        if (right_depth > left_depth)
                return (right_depth + 1);
        else
                return (left_depth + 1);
}