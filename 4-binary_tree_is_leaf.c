#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, 0 if otherwise, or 0 if node is NULL
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((!node) || (node->left) || (node->right))
		return (0);

	return (1);
}
