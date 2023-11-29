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
        return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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

        right_height = (tree->right) ? (1 + binary_tree_height(tree->right)) : 1; 
        left_height = (tree->left) ? (1 + binary_tree_height(tree->left)) : 1; 

        return ((right_height > left_height) ? right_height : left_height);
}