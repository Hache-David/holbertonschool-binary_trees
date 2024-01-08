#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is the root of a binary tree
 * @node: pointer to the node to check
 *
 * Return: 1 if the node is a root, otherwise 0. If node is NULL, returns 0.
 *
 * Description: This function checks if a given node in
 * a binary tree is the root.
 * A node is considered a root if it has no parent. If the node is NULL, the
 * function returns 0, indicating it is not a root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
