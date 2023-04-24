#include "binary_trees.h"

/**
* binary_tree_height - how high is the bitree
* @tree:  root node ptr
* Return: 0 if null
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lsz = 0, rsz = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		lsz = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		rsz = 1 + binary_tree_height(tree->right);
	if (lsz > rsz)
		return (lsz);
	return (rsz);
}
