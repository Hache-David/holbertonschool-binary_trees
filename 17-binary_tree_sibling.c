#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling of
 *
 * Description: This function returns a pointer to the sibling of a node
 * in a binary tree. The sibling of a node is another child of the same parent.
 * If the node is NULL or if the parent is NULL (meaning the node is a root),
 * or if the node has no sibling, the function returns NULL.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
