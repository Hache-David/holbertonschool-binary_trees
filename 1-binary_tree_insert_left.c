#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insère un nœud comme enfant
 * gauche d'un autre nœud
 * @parent: pointeur vers le nœud parent
 * @value: la valeur à stocker dans le nouveau nœud
 *
 * Return: pointeur vers le nœud créé, ou NULL en cas d'échec
 * ou si parent est NULL
 *
 * Description: Cette fonction insère un nouveau nœud comme enfant gauche
 * du nœud parent donné. Si le parent a déjà un enfant gauche, le nouveau
 * nœud prend sa place, et l'ancien enfant gauche devient l'enfant gauche
 * du nouveau nœud.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
