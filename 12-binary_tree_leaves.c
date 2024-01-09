#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves.
 *
 * Return: 0 if tree equal NULL or the counts of the leaves in a binary tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		size = size + 1;
	}
	else
	{
		size = size + binary_tree_leaves(tree->right);
		size = size + binary_tree_leaves(tree->left);
	}
	return (size);
}
