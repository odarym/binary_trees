#include "binary_trees.h"


/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	uint16_t result = 0;

	if (!tree)
		return (0);

	else
	{
		result = PerfectTree(tree);

		if (result != 0)
			return (1);

		return (0);
	}
}

/**
 * PerfectTree - Recursive function to check if a tree is perfect.
 *
 * @tree: 
 *
 * Return:
*/
int PerfectTree(const binary_tree_t *tree)
{
	uint16_t i = 0;
	uint16_t j = 0;

	if ((tree->left) && (tree->right))
	{
		i = 1 + PerfectTree(tree->left);
		j = 1 + PerfectTree(tree->right);

		if ( (i != 0) && (j == i))
			return (j);

		return (0);
	}
	else if ((!tree->left) && (!tree->right))
		return (1);

	return (0);
}
