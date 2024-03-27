#include "binary_trees.h"

/**
 * binary_trees_ancestor - func finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	binary_tree_t *firstAncestor = NULL;
	binary_tree_t *secondAncestor = NULL;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	firstAncestor = first->parent;
	secondAncestor = second->parent;

	if (!firstAncestor || (first == secondAncestor) || (!firstAncestor->parent && secondAncestor))
		return (binary_trees_ancestor(first, secondAncestor));

	else if ((!secondAncestor) || (firstAncestor == second) || (!secondAncestor->parent && firstAncestor))
		return (binary_trees_ancestor(firstAncestor, second));

	return (binary_trees_ancestor(firstAncestor, secondAncestor));
}
