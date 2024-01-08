#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree. If tree is NULL, returns 0.
 *
 * Description: This function calculates the size of a binary tree, which
 * is the total number of nodes in the tree. It uses recursion to count
 * the nodes in both the left and right subtrees.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
	{
		return (0);
	}

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (1 + size_left + size_right);
}
