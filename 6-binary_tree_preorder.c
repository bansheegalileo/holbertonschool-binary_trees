#include "binary_trees.h"

/**
* binary_tree_preorder -traverses the tree preorder style
* @tree:  root of tree 2 trav
* @func: ptr to func to call for each nose
* Return: void
**/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
