#include "binary_trees.h"

/**
* binary_tree_is_full - is it full
* @tree:  root ptr
* Return: 0 if null
**/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int ch_l = 0;
	int ch_r = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	if ((tree->left != NULL) && (tree->right != NULL))
	{
		ch_l = binary_tree_is_full(tree->left);
		ch_r = binary_tree_is_full(tree->right);
		if ((ch_l == 1) && (ch_r == 1))
			return (1);
	}
	return (0);
}
