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
        if (tree->right != NULL)
                right_depth = 1 + binary_tree_height(tree->right);
        else
                right_depth = 0;
        if (tree->left != NULL)
                left_depth = 1 + binary_tree_height(tree->left);
        else
                left_depth = 0;

        if (right_depth > left_depth)
                return (right_depth);
        else
                return (left_depth);
}