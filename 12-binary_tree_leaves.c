#include "binary_trees.h"


/**
 * binary_tree_leaves - function that counts the treeLeaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of treeLeaves
 * Return: 0 if tree is NULL
 * A NULL pointer is not a leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	uint16_t treeLeaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			treeLeaves++;

		treeLeaves += binary_tree_leaves(tree->left);

		treeLeaves += binary_tree_leaves(tree->right);
	}

	return (treeLeaves);
}
