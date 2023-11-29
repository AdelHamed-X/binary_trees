#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * 
 * @tree: a pointer to the root node
 * 
 * Return: the balance factor of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
        size_t right_height = 0, left_height = 0;
        
        if (tree == NULL)
                return (0);
        
        right_height = (tree->right) ? (1 + binary_tree_balance(tree->right)) : 0; 
        left_height = (tree->left) ? (1 + binary_tree_balance(tree->left)) : 0; 

        return (left_height - right_height);
}