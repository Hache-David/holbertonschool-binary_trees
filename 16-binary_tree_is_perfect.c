#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * is_full_at_all_levels - helper function to check if all levels are full
 * @tree: pointer to the root node of the tree to check
 * @height: height of the tree
 * @level: current level in the tree
 *
 * Return: 1 if all levels are full, 0 otherwise
 */
int is_full_at_all_levels(const binary_tree_t
*tree, size_t height, size_t level)
{
	if (tree == NULL)
		return (level == height);

	if (level == height - 1)
		return (tree->left != NULL && tree->right != NULL);

	return (is_full_at_all_levels(tree->left, height, level + 1) &&
			is_full_at_all_levels(tree->right, height, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height = binary_tree_height(tree);

	return (is_full_at_all_levels(tree, height, 0));
}
