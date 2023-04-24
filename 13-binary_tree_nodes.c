#include "binary_trees.h"

/**
* binary_tree_nodes -  counts nodes with at leavs 1 chilly
* @tree:  root ptr
* Return: 0 if null
**/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nose = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nose = 1;
	nose = nose + binary_tree_nodes(tree->left);
	nose = nose + binary_tree_nodes(tree->right);
	return (nose);
}
