#include "binary_trees.h"
/* 
* binary_trees_ancestor -  finds the lowest common ancestor of two nodes.
 *
 * @first: a pointer ot the root node.
 * @second: a pointer ot the root node.
 *
 * Return:  lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *ancestor = NULL;

    /* Traverse upwards from the first node and mark visited nodes */
    while (first) {
        first->n *= -1; /* Mark as visited */
        first = first->parent;
    }

    /* Traverse upwards from the second node and find the first visited node */
    while (second) {
        if (second->n < 0) {
            ancestor = second;
            break;
        }
        second = second->parent;
    }

    /* Restore the values of visited nodes to their original values */
    while (first) {
        first->n *= -1; /* Restore original value */
        first = first->parent;
    }

    return (binary_tree_t *)ancestor;
}
