#include "binary_trees.h"
/**
 * binary_tree_t - function that finds the sibling of a node
 * @node:  pointer to the node to find the sibling
 * Return: node is NULL or the parent is NULL, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *parent = node->parent;
	binary_tree_t *sibling = NULL;

	if (node == parent->left)
	{
		sibling = parent->right;
	}
	else
	{
		sibling = parent->left;
	}
	return (sibling);
}
