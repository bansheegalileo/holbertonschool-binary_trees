#include "binary_trees.h"

/**
* binary_tree_depth -IT GOEES EVEN DEEPERRR
* @tree:  rotnod e ptr
* Return: 0 if null
**/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
