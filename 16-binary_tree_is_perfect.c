#include "binary_trees.h"

/**
 * binary_tree_is_perfect - is it perfect
 * @tree: root ptr
 * Return: 1 if t 0 if f
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size_l, size_r;

	if (tree == NULL)
		return (0);
	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);
	if (size_l == size_r)
		return (1);
	return (0);
}

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
