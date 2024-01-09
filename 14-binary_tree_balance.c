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
	int balance_factor = 0;
	const binary_tree_t *tree_save;

	if (tree == NULL)
	{
		return (0);
	}
	tree_save = malloc(sizeof(binary_tree_t));
	tree_save = tree;
	if (tree_save == NULL)
	{
		return (0);
	}
	while (tree_save->right != NULL)
	{
		balance_factor -= 1;
		tree_save = tree_save->right;
	}
	while (tree->left != NULL)
	{
		balance_factor += 1;
		tree = tree->left;
	}
	return (balance_factor);
}
