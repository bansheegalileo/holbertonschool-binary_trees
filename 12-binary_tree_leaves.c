#include "binary_trees.h"

/**
* binary_tree_leaves -counts leaves
* @tree:  root ptr
* Return: 0 if null
**/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total, l_lvs, r_lvs;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l_lvs = binary_tree_leaves(tree->left);
	r_lvs = binary_tree_leaves(tree->right);
	total = l_lvs + r_lvs;
	return (total);
}
