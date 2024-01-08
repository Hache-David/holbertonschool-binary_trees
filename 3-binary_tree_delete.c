#include "binary_trees.h"

/**
 * binary_tree_delete - Supprime un arbre binaire entier
 * @tree: pointeur vers le nœud racine de l'arbre à supprimer
 *
 * Description: Cette fonction parcourt récursivement l'arbre binaire et
 * libère l'espace mémoire de chaque nœud. Si l'arbre est NULL, la fonction
 * ne fait rien.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
