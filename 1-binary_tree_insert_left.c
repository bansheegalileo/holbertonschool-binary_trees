#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left child node
 * @parent: parent pointer
 * @value: NN val
 * Return: ptr to NN, NULL on fail
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *nu, *tp;

	if (parent == NULL)
		return (NULL);

	nu = malloc(sizeof(binary_tree_t));
	if (nu == NULL)
		return (NULL);

	nu->n = value;
	if (parent->left == NULL)
	{
		parent->left = nu;
		nu->right = NULL;
		nu->left = NULL;
		nu->parent = parent;
	}
	else
	{
		tp = parent->left;
		parent->left = nu;
		nu->left = tp;
		nu->right = NULL;
		nu->parent = parent;
		tp->parent = nu;
	}
		return (nu);
}
