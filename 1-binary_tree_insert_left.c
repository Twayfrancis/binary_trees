#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as left-child of another node
 * @parent: pointer to node to insert the left-child in
 * @value: vvalue to store in the new node
 *
 * Return: pointer to created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
