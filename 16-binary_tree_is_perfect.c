#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, count_node;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	count_node = binary_tree_size(tree);

	return (count_node == (1 << height) - 1);
}

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

/**
 * binary_tree_height - Calcule la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre à mesurer
 * Return: La hauteur de l'arbre
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}

