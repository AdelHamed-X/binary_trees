#include "binary_trees.h"

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