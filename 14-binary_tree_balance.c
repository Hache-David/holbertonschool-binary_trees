#include "binary_trees.h"

/**
 *	binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL 0 or balance_factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_right = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (height_left - height_right);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree. If tree is NULL, returns 0.
 *
 * Description: This function calculates the height of a binary tree.
 * The height
 * is the longest path from the root to a leaf. The function uses recursion to
 * find the height of both the left and right subtrees and returns the greater
 * one.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((height_left > height_right) ? height_left : height_right);
}

