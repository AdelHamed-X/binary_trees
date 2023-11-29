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
        size_t right_height, left_height;
        
        if (tree == NULL)
                return (0);
        
        right_height = (tree->right) ? (1 + binary_tree_height) : 0; 
        left_height = (tree->left) ? (1 + binary_tree_height) : 0; 

        return ((right_height > left_height) ? right_height : left_height);
}