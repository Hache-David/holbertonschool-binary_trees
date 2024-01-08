#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the rigth child of another node
 * @parent: pointer to the parent node
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 *
 * Description: This function inserts a new node as the rigth child
 * of the given parent node. If the parent already has a rigth child, the new
 * node takes its place, and the old left child becomes the rigth child
 * of the new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;
	new_node->left = NULL;

	if (parent->right != NULL)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
