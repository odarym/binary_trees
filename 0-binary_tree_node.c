#include "binary_trees.h"


/**
 * binary_tree_node - Add a new node to a tree
 *
 * @parent: Parent node
 * @value: value to be placed on the node
 *
 * Return: New node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newTreeNode = malloc(sizeof(newTreeNode));

	if (!newTreeNode)
	{
		return (NULL);
	}

	newTreeNode->n = value;
	newTreeNode->parent = parent;
	newTreeNode->left = NULL;
	newTreeNode->right = NULL;

	return (newTreeNode);
}
