#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function check if the node is a leaf.
 *
 * @node : the node to be checked.
 *
 * Return: 0 if node is not a leaf or equal NULL , else 1.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
