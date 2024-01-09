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

	if (tree->left != NULL)
	{
		height_left = 1 + binary_tree_balance(tree->left);
	}
	if (tree->right != NULL)
	{
		height_right = 1 + binary_tree_balance(tree->right);
	}
	return (height_left - height_right);
}

