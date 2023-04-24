#include "binary_trees.h"

/**
* binary_tree_size -size
* @tree:  root ptr
* Return: 0 if null
**/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		sz = sz + binary_tree_size(tree->left);
	if (tree->right != NULL)
		sz = sz + binary_tree_size(tree->right);
	sz = sz + 1;
	return (sz);
}
