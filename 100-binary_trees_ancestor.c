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
	const binary_tree_t *firstAncestor = first;
	const binary_tree_t *secondAncestor = second;

	while (firstAncestor)
	{
		firstAncestor = firstAncestor->parent;
		while (secondAncestor)
		{
			secondAncestor = secondAncestor->parent;
			if (firstAncestor == secondAncestor)
				return ((binary_tree_t *)firstAncestor);
		}
	}

	return (NULL);
}
