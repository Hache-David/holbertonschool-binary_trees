#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		return (binary_tree_is_full(tree));

	return (0);
}

/**
 * binary_tree_is_full - Vérifie si un arbre binaire est complet
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 * Return: 1 si l'arbre est complet, sinon 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
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

