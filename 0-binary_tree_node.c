#include "binary_trees.h"

/**
 * binary_tree_node - creates bin tree node
 * @parent: parent pointer
 * @value: newnode val
 * Return: ptr to NN, NULL on fail
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nu;

	nu = malloc(sizeof(binary_tree_t));
	if (nu == NULL)
		return (NULL);

	nu->n = value;
	nu->parent = parent;
	nu->left = NULL;
	nu->right = NULL;

	return (nu);

}
