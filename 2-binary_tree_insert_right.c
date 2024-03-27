#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to node to insert the right-child in
 * @value:  value stored in the newTreeNode node
 * Return: a pointer to the created node/NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newTreeNode;

	if (!parent)
		return (NULL);

	newTreeNode = binary_tree_node(parent, value);
	if (!newTreeNode)
		return (NULL);

	if (parent->right)
	{
		newTreeNode->right = parent->right;
		parent->right->parent = newTreeNode;
	}
	parent->right = newTreeNode;
	return (newTreeNode);
}
