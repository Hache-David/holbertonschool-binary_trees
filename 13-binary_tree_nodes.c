#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes with at least one child.
 * If tree is NULL, returns 0.
 *
 * Description: This function traverses the binary tree and counts the nodes
 * that have at least one child. A NULL pointer is not considered a node.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left, count_right;

	if (tree == NULL)
	{
		return (0);
	}

	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + count_left + count_right);
	}
	else
	{
		return (count_left + count_right);
	}
}
