#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 *  of another node.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: NULL on failure or if parent is NULL.
 *  Otherwise - a pointer to the created node.
 *
 * Description: If parent already has a right-child, the
 *  new node must take its place, and the old right-child
 *  must be set as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
