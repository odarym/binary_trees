#include "binary_trees.h"


/**
 * array_to_bst - function that builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: pointer to the root node of the created BST, or NULL on failure
 * If a value of array is already present in tree, this value must be ignored
*/
bst_t *array_to_bst(int *array, size_t size)
{
	uint16_t i = 0;
	bst_t *tree = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}
