#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *
 *
 */

struct Node
{
	int data;
	struct Node *left, *right;
};

struct Node* newNode(int data)
{
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

struct Node* binary_tree_uncle(struct Node *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (NULL);
	}
	
	if (node->parent == NULL)
	{
		return (NULL);
	}
	
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

int main()
{
	struct Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	
	struct Node *uncle = binary_tree_uncle(root->left);
	printf("L'oncle du nœud 2 est : %d\n", uncle->data);
	uncle = binary_tree_uncle(root->left->right);
	printf("L'oncle du nœud 5 est : %d\n", uncle->data);
	
	return (0);
}
