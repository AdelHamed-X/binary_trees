#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a node is full.
 * 
 * @tree: the root node.
 * 
 * Return: 1 if a node is full, 0 otherwise.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
        int check;

        if (tree)
        {
                if (tree->left && tree->right)
                {
                        check = 1;
                }
                binary_tree_is_full(tree->left);
                binary_tree_is_full(tree->right);
        }

        return (check);
}