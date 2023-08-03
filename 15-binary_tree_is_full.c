#include "binary_trees.h"

/**
 * binary_tree_is_full - runs a check for a binary tree if full
 * @tree: pointer to the root node of the tree
 * Return: 1 if the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
