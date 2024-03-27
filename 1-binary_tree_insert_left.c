#include "binary_trees.h"


/**
 * binary_tree_insert_left -  insert node as the left-child of another node
 *
 * @parent: pointer to node to insert left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newTreeNode = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);

	if (!newTreeNode)
		return (NULL);

	if (parent->left != NULL)
	{
		newTreeNode->left = parent->left;
		parent->left->parent = newTreeNode;
	}

	parent->left = newTreeNode;

	return (newTreeNode);
}
