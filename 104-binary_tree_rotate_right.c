#include "binary_trees.h"


/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 *
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *child1 = NULL;
	binary_tree_t *parent = tree;

	if (!tree)
		return (NULL);

	child1 = parent->left;
	if (!child1)
		return (tree);

	if (child1->right)
		child1->right->parent = parent;

	parent->left = child1->right;
	child1->right = parent;

	child1->parent = parent->parent;
	parent->parent = child1;

	if (child1->parent && child1->parent->left == parent)
		child1->parent->left = child1;

	else if (child1->parent)
		child1->parent->right = child1;

	return (child1);
}
