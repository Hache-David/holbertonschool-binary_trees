#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in the node
 *        is passed as a parameter to this function.
 *
 * Description: This function traverses a binary tree in an in-order manner,
 * which means it visits the left subtree, the current node, and then the
 * right subtree recursively. If tree or func is NULL,
 * the function does nothing.
 * This approach is used to apply a given function to each node of the tree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
