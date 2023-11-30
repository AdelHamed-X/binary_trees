#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * 
 * @tree: the root node.
 * 
 * Return: 1 if a binary tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

        if (tree->left== NULL && tree->right == NULL)
                return (1);

        if (binary_tree_nodes(tree->right) != binary_tree_nodes(tree->left))
                return (0);
        
        return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * 
 * @tree: a pointer to the root node
 * 
 * Return: the count of the tree nodes with at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
        size_t size = 0;
        
        if (tree)
        {
                if (tree->right || tree->left)
                {
                        size += 1; 
                } 
                size += binary_tree_nodes(tree->right); 
                size += binary_tree_nodes(tree->left);
        }

        return (size);
}