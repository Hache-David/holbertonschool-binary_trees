#include "binary_trees.h"

/**
 * binary_tree_node - create newnode and store value inside.
 *
 * @parent : pointer to the current parent.
 * @value : value stored in newnode.
 *
 * Return: pointer to the newnode created.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
