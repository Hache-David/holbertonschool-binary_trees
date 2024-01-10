#include "binary_trees.h"

/**
 * binary_tree_height - Calcule la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre à mesurer
 * Return: La hauteur de l'arbre
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
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
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 * Return: 1 si l'arbre est parfait, sinon 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		return (binary_tree_is_full(tree));

	return (0);
}