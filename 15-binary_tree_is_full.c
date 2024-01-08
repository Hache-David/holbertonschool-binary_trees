#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: Checks recursively if a binary tree is full.
 * A binary tree is full
 * if every node has either zero or two children nodes. The function returns 1
 * if the tree is full, 0 if it is not or if the tree is NULL.
 *
 * Return: 1 if tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
	(tree->left != NULL && tree->right == NULL))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
