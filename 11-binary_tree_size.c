#include "binary_trees.h"


/**
 * binary_tree_size - function that measures the treeSize of a binary tree
 * @tree: a pointer to the root node of the tree to measure the treeSize
 * Return: if tree is NULL, the function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	uint16_t treeSize = 0;

	if (tree)
	{
		treeSize++;

		treeSize += binary_tree_size(tree->left);

		treeSize += binary_tree_size(tree->right);
	}

	return (treeSize);
}
