#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}


size_t binary_tree_height(const binary_tree_t *tree)
{
	uint16_t i = 0;
	uint16_t k = 0;

	if (tree)
	{
		if (tree->left)
			i = 1 + binary_tree_height(tree->left);
		else
			i = 1;
		if (tree->right)
			k = 1 + binary_tree_height(tree->right);
		else
			k = 1;


		if (i > k)
			return (i);
		else
			return (k);
	}

	return (0);
}
